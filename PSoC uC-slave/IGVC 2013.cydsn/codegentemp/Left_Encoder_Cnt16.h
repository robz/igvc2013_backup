/*******************************************************************************
* File Name: Left_Encoder_Cnt16.h  
* Version 2.0
*
*  Description:
*   Contains the function prototypes and constants available to the counter
*   user module.
*
*   Note:
*    None
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
    
#if !defined(CY_COUNTER_Left_Encoder_Cnt16_H)
#define CY_COUNTER_Left_Encoder_Cnt16_H

#include "cytypes.h"
#include "cyfitter.h"
#include "CyLib.h" /* For CyEnterCriticalSection() and CyExitCriticalSection() functions */

/***************************************
* Conditional Compilation Parameters
***************************************/

/* PSoC3 ES2 or early */
#define Left_Encoder_Cnt16_PSOC3_ES2  ((CYDEV_CHIP_MEMBER_USED == CYDEV_CHIP_MEMBER_3A)    && \
                                    (CYDEV_CHIP_REVISION_USED <= CYDEV_CHIP_REVISION_3A_ES2))
/* PSoC5 ES1 or early */
#define Left_Encoder_Cnt16_PSOC5_ES1  ((CYDEV_CHIP_MEMBER_USED == CYDEV_CHIP_MEMBER_5A)    && \
                                    (CYDEV_CHIP_REVISION_USED <= CYDEV_CHIP_REVISION_5A_ES1))
/* PSoC3 ES3 or later */
#define Left_Encoder_Cnt16_PSOC3_ES3  ((CYDEV_CHIP_MEMBER_USED == CYDEV_CHIP_MEMBER_3A)    && \
                                    (CYDEV_CHIP_REVISION_USED > CYDEV_CHIP_REVISION_3A_ES2))
/* PSoC5 ES2 or later */
#define Left_Encoder_Cnt16_PSOC5_ES2  ((CYDEV_CHIP_MEMBER_USED == CYDEV_CHIP_MEMBER_5A)    && \
                                    (CYDEV_CHIP_REVISION_USED > CYDEV_CHIP_REVISION_5A_ES1))


/**************************************
*           Parameter Defaults        
**************************************/

#define Left_Encoder_Cnt16_Resolution            16u
#define Left_Encoder_Cnt16_UsingFixedFunction    0u
#define Left_Encoder_Cnt16_ControlRegRemoved     0u
#define Left_Encoder_Cnt16_COMPARE_MODE_SOFTWARE 0u
#define Left_Encoder_Cnt16_CAPTURE_MODE_SOFTWARE 0u
#define Left_Encoder_Cnt16_RunModeUsed           0u


/***************************************
*       Type defines
***************************************/

/* Sleep Mode API Support */
/**************************************************************************
 * Backup structure for Sleep Wake up operations
 *************************************************************************/
typedef struct Left_Encoder_Cnt16_backupStruct
{
    /* Sleep BackUp structure */
    uint8 CounterEnableState; 
    #if (Left_Encoder_Cnt16_PSOC3_ES2 || Left_Encoder_Cnt16_PSOC5_ES1)
        uint16 CounterUdb;    /* Current Counter Value      */
        uint16 CounterPeriod; /* Counter Period Value       */
        uint16 CompareValue;  /* Counter Compare Value      */           
        uint8 InterruptMaskValue; /* Counter Compare Value */
    #endif
	
	#if (Left_Encoder_Cnt16_PSOC3_ES3 || Left_Encoder_Cnt16_PSOC5_ES2)
			uint16 CounterUdb;
			uint8 InterruptMaskValue;
	#endif
	
    #if (!Left_Encoder_Cnt16_ControlRegRemoved)
        uint8 CounterControlRegister;          /* Counter Control Register   */
    #endif
}Left_Encoder_Cnt16_backupStruct;

/**************************************
 *  Function Prototypes
 *************************************/
void    Left_Encoder_Cnt16_Start(void);
void    Left_Encoder_Cnt16_Stop(void) ;
void    Left_Encoder_Cnt16_SetInterruptMode(uint8 interruptsMask) ;
uint8   Left_Encoder_Cnt16_ReadStatusRegister(void) ;
#define Left_Encoder_Cnt16_GetInterruptSource() Left_Encoder_Cnt16_ReadStatusRegister()
#if(!Left_Encoder_Cnt16_ControlRegRemoved)
    uint8   Left_Encoder_Cnt16_ReadControlRegister(void) ;
    void    Left_Encoder_Cnt16_WriteControlRegister(uint8 control) \
        ;
#endif
void    Left_Encoder_Cnt16_WriteCounter(uint16 counter) \
    ; 
uint16  Left_Encoder_Cnt16_ReadCounter(void) ;
uint16  Left_Encoder_Cnt16_ReadCapture(void) ;
void    Left_Encoder_Cnt16_WritePeriod(uint16 period) \
    ;
uint16  Left_Encoder_Cnt16_ReadPeriod( void ) ;
#if (!Left_Encoder_Cnt16_UsingFixedFunction)
    void    Left_Encoder_Cnt16_WriteCompare(uint16 compare) \
        ;
    uint16  Left_Encoder_Cnt16_ReadCompare( void ) \
        ;
#endif

#if (Left_Encoder_Cnt16_COMPARE_MODE_SOFTWARE)
    void    Left_Encoder_Cnt16_SetCompareMode(uint8 comparemode) ;
#endif
#if (Left_Encoder_Cnt16_CAPTURE_MODE_SOFTWARE)
    void    Left_Encoder_Cnt16_SetCaptureMode(uint8 capturemode) ;
#endif
void Left_Encoder_Cnt16_ClearFIFO(void)     ;
void Left_Encoder_Cnt16_Init(void)          ;
void Left_Encoder_Cnt16_Enable(void)        ;
void Left_Encoder_Cnt16_SaveConfig(void)    ;
void Left_Encoder_Cnt16_RestoreConfig(void) ;
void Left_Encoder_Cnt16_Sleep(void)         ;
void Left_Encoder_Cnt16_Wakeup(void)        ;

/***************************************
*   Enumerated Types and Parameters
***************************************/

/* Enumerated Type B_Counter__CompareModes, Used in Compare Mode retained for backward compatibility of tests*/
#define Left_Encoder_Cnt16__B_COUNTER__LESS_THAN 1
#define Left_Encoder_Cnt16__B_COUNTER__LESS_THAN_OR_EQUAL 2
#define Left_Encoder_Cnt16__B_COUNTER__EQUAL 0
#define Left_Encoder_Cnt16__B_COUNTER__GREATER_THAN 3
#define Left_Encoder_Cnt16__B_COUNTER__GREATER_THAN_OR_EQUAL 4
#define Left_Encoder_Cnt16__B_COUNTER__SOFTWARE 5

/* Enumerated Type Counter_CompareModes */
#define Left_Encoder_Cnt16_CMP_MODE_LT 1u
#define Left_Encoder_Cnt16_CMP_MODE_LTE 2u
#define Left_Encoder_Cnt16_CMP_MODE_EQ 0u
#define Left_Encoder_Cnt16_CMP_MODE_GT 3u
#define Left_Encoder_Cnt16_CMP_MODE_GTE 4u
#define Left_Encoder_Cnt16_CMP_MODE_SOFTWARE_CONTROLLED 5u

/* Enumerated Type B_Counter__CaptureModes, Used in Capture Mode retained for backward compatibility of tests*/
#define Left_Encoder_Cnt16__B_COUNTER__NONE 0
#define Left_Encoder_Cnt16__B_COUNTER__RISING_EDGE 1
#define Left_Encoder_Cnt16__B_COUNTER__FALLING_EDGE 2
#define Left_Encoder_Cnt16__B_COUNTER__EITHER_EDGE 3
#define Left_Encoder_Cnt16__B_COUNTER__SOFTWARE_CONTROL 4

/* Enumerated Type Counter_CompareModes */
#define Left_Encoder_Cnt16_CAP_MODE_NONE 0u
#define Left_Encoder_Cnt16_CAP_MODE_RISE 1u
#define Left_Encoder_Cnt16_CAP_MODE_FALL 2u
#define Left_Encoder_Cnt16_CAP_MODE_BOTH 3u
#define Left_Encoder_Cnt16_CAP_MODE_SOFTWARE_CONTROLLED 4u
/***************************************
 *  Initialization Values
 **************************************/
#define Left_Encoder_Cnt16_INIT_PERIOD_VALUE       32768u
#define Left_Encoder_Cnt16_INIT_COUNTER_VALUE      32768u
#if (Left_Encoder_Cnt16_UsingFixedFunction)
#define Left_Encoder_Cnt16_INIT_INTERRUPTS_MASK    ((0u << Left_Encoder_Cnt16_STATUS_ZERO_INT_EN_MASK_SHIFT))
#else
#define Left_Encoder_Cnt16_INIT_COMPARE_VALUE      32768u
#define Left_Encoder_Cnt16_INIT_INTERRUPTS_MASK ((0u << Left_Encoder_Cnt16_STATUS_ZERO_INT_EN_MASK_SHIFT) | \
        (0u << Left_Encoder_Cnt16_STATUS_CAPTURE_INT_EN_MASK_SHIFT) | \
        (0u << Left_Encoder_Cnt16_STATUS_CMP_INT_EN_MASK_SHIFT) | \
        (0u << Left_Encoder_Cnt16_STATUS_OVERFLOW_INT_EN_MASK_SHIFT) | \
        (0u << Left_Encoder_Cnt16_STATUS_UNDERFLOW_INT_EN_MASK_SHIFT))
#define Left_Encoder_Cnt16_DEFAULT_COMPARE_MODE    (0u << Left_Encoder_Cnt16_CTRL_CMPMODE0_SHIFT)
#define Left_Encoder_Cnt16_DEFAULT_CAPTURE_MODE    (0u << Left_Encoder_Cnt16_CTRL_CAPMODE0_SHIFT)
#endif /* (Left_Encoder_Cnt16_UsingFixedFunction) */

/**************************************
 *  Registers
 *************************************/
#if (Left_Encoder_Cnt16_UsingFixedFunction)
    #define Left_Encoder_Cnt16_STATICCOUNT_LSB     (*(reg16 *) Left_Encoder_Cnt16_CounterHW__CAP0 )
    #define Left_Encoder_Cnt16_STATICCOUNT_LSB_PTR ( (reg16 *) Left_Encoder_Cnt16_CounterHW__CAP0 )
    #define Left_Encoder_Cnt16_PERIOD_LSB          (*(reg16 *) Left_Encoder_Cnt16_CounterHW__PER0 )
    #define Left_Encoder_Cnt16_PERIOD_LSB_PTR      ( (reg16 *) Left_Encoder_Cnt16_CounterHW__PER0 )
    /* MODE must be set to 1 to set the compare value */
    #define Left_Encoder_Cnt16_COMPARE_LSB         (*(reg16 *) Left_Encoder_Cnt16_CounterHW__CNT_CMP0 )
    #define Left_Encoder_Cnt16_COMPARE_LSB_PTR     ( (reg16 *) Left_Encoder_Cnt16_CounterHW__CNT_CMP0 )
    /* MODE must be set to 0 to get the count */
    #define Left_Encoder_Cnt16_COUNTER_LSB         (*(reg16 *) Left_Encoder_Cnt16_CounterHW__CNT_CMP0 )
    #define Left_Encoder_Cnt16_COUNTER_LSB_PTR     ( (reg16 *) Left_Encoder_Cnt16_CounterHW__CNT_CMP0 )
    #define Left_Encoder_Cnt16_RT1                 (*(reg8 *) Left_Encoder_Cnt16_CounterHW__RT1)
    #define Left_Encoder_Cnt16_RT1_PTR             ( (reg8 *) Left_Encoder_Cnt16_CounterHW__RT1)
#else
    #define Left_Encoder_Cnt16_STATICCOUNT_LSB     (*(reg16 *) \
        Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__F0_REG )
    #define Left_Encoder_Cnt16_STATICCOUNT_LSB_PTR ( (reg16 *) \
        Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__F0_REG )
    #define Left_Encoder_Cnt16_PERIOD_LSB          (*(reg16 *) \
        Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__D0_REG )
    #define Left_Encoder_Cnt16_PERIOD_LSB_PTR      ( (reg16 *) \
        Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__D0_REG )
    #define Left_Encoder_Cnt16_COMPARE_LSB         (*(reg16 *) \
        Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__D1_REG )
    #define Left_Encoder_Cnt16_COMPARE_LSB_PTR     ( (reg16 *) \
        Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__D1_REG )
    #define Left_Encoder_Cnt16_COUNTER_LSB         (*(reg16 *) \
        Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__A0_REG )
    #define Left_Encoder_Cnt16_COUNTER_LSB_PTR     ( (reg16 *)\
        Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__A0_REG )

    #define Left_Encoder_Cnt16_AUX_CONTROLDP0 \
        (*(reg8 *) Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__DP_AUX_CTL_REG)
    #define Left_Encoder_Cnt16_AUX_CONTROLDP0_PTR \
        ( (reg8 *) Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u0__DP_AUX_CTL_REG)
    #if (Left_Encoder_Cnt16_Resolution == 16 || Left_Encoder_Cnt16_Resolution == 24 || Left_Encoder_Cnt16_Resolution == 32)
       #define Left_Encoder_Cnt16_AUX_CONTROLDP1 \
           (*(reg8 *) Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u1__DP_AUX_CTL_REG)
       #define Left_Encoder_Cnt16_AUX_CONTROLDP1_PTR \
           ( (reg8 *) Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u1__DP_AUX_CTL_REG)
    #endif
    #if (Left_Encoder_Cnt16_Resolution == 24 || Left_Encoder_Cnt16_Resolution == 32)
       #define Left_Encoder_Cnt16_AUX_CONTROLDP2 \
           (*(reg8 *) Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u2__DP_AUX_CTL_REG)
       #define Left_Encoder_Cnt16_AUX_CONTROLDP2_PTR \
           ( (reg8 *) Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u2__DP_AUX_CTL_REG)
    #endif
    #if (Left_Encoder_Cnt16_Resolution == 32)
       #define Left_Encoder_Cnt16_AUX_CONTROLDP3 \
           (*(reg8 *) Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u3__DP_AUX_CTL_REG)
       #define Left_Encoder_Cnt16_AUX_CONTROLDP3_PTR \
           ( (reg8 *) Left_Encoder_Cnt16_CounterUDB_sC16_counterdp_u3__DP_AUX_CTL_REG)
    #endif
#endif  /* (Left_Encoder_Cnt16_UsingFixedFunction) */

#if (Left_Encoder_Cnt16_UsingFixedFunction)
    #define Left_Encoder_Cnt16_STATUS         (*(reg8 *) Left_Encoder_Cnt16_CounterHW__SR0 )
    /* In Fixed Function Block Status and Mask are the same register */
    #define Left_Encoder_Cnt16_STATUS_MASK             (*(reg8 *) Left_Encoder_Cnt16_CounterHW__SR0 )
    #define Left_Encoder_Cnt16_STATUS_MASK_PTR         ( (reg8 *) Left_Encoder_Cnt16_CounterHW__SR0 )
    #define Left_Encoder_Cnt16_CONTROL                 (*(reg8 *) Left_Encoder_Cnt16_CounterHW__CFG0)
    #define Left_Encoder_Cnt16_CONTROL_PTR             ( (reg8 *) Left_Encoder_Cnt16_CounterHW__CFG0)
    #define Left_Encoder_Cnt16_CONTROL2                (*(reg8 *) Left_Encoder_Cnt16_CounterHW__CFG1)
    #define Left_Encoder_Cnt16_CONTROL2_PTR            ( (reg8 *) Left_Encoder_Cnt16_CounterHW__CFG1)
    #if (Left_Encoder_Cnt16_PSOC3_ES3 || Left_Encoder_Cnt16_PSOC5_ES2)
        #define Left_Encoder_Cnt16_CONTROL3       (*(reg8 *) Left_Encoder_Cnt16_CounterHW__CFG2)
        #define Left_Encoder_Cnt16_CONTROL3_PTR   ( (reg8 *) Left_Encoder_Cnt16_CounterHW__CFG2)
    #endif
    #define Left_Encoder_Cnt16_GLOBAL_ENABLE           (*(reg8 *) Left_Encoder_Cnt16_CounterHW__PM_ACT_CFG)
    #define Left_Encoder_Cnt16_GLOBAL_ENABLE_PTR       ( (reg8 *) Left_Encoder_Cnt16_CounterHW__PM_ACT_CFG)
    #define Left_Encoder_Cnt16_GLOBAL_STBY_ENABLE      (*(reg8 *) Left_Encoder_Cnt16_CounterHW__PM_STBY_CFG)
    #define Left_Encoder_Cnt16_GLOBAL_STBY_ENABLE_PTR  ( (reg8 *) Left_Encoder_Cnt16_CounterHW__PM_STBY_CFG)
    
    /********************************
    *    Constants
    ********************************/
    /* Fixed Function Block Chosen */
    #define Left_Encoder_Cnt16_BLOCK_EN_MASK          Left_Encoder_Cnt16_CounterHW__PM_ACT_MSK
    #define Left_Encoder_Cnt16_BLOCK_STBY_EN_MASK     Left_Encoder_Cnt16_CounterHW__PM_STBY_MSK 
    
    /* Control Register Bit Locations */    
    /* As defined in Register Map, part of TMRX_CFG0 register */
    #define Left_Encoder_Cnt16_CTRL_ENABLE_SHIFT      0x00u
	#define Left_Encoder_Cnt16_ONESHOT_SHIFT			0x02u
    /* Control Register Bit Masks */
    #define Left_Encoder_Cnt16_CTRL_ENABLE            (0x01u << Left_Encoder_Cnt16_CTRL_ENABLE_SHIFT)         
	#define Left_Encoder_Cnt16_ONESHOT 				(0x01u << Left_Encoder_Cnt16_ONESHOT_SHIFT)
	
    /* Control2 Register Bit Masks */
    /* Set the mask for run mode */
    #if (Left_Encoder_Cnt16_PSOC3_ES2 || Left_Encoder_Cnt16_PSOC5_ES1)
        /* Use CFG1 Mode bits to set run mode */
        #define Left_Encoder_Cnt16_CTRL_MODE_SHIFT        0x01u    
        #define Left_Encoder_Cnt16_CTRL_MODE_MASK         (0x07u << Left_Encoder_Cnt16_CTRL_MODE_SHIFT)
    #endif
    #if (Left_Encoder_Cnt16_PSOC3_ES3 || Left_Encoder_Cnt16_PSOC5_ES2)
        /* Use CFG2 Mode bits to set run mode */
        #define Left_Encoder_Cnt16_CTRL_MODE_SHIFT        0x00u    
        #define Left_Encoder_Cnt16_CTRL_MODE_MASK         (0x03u << Left_Encoder_Cnt16_CTRL_MODE_SHIFT)
    #endif
    /* Set the mask for interrupt (raw/status register) */
    #define Left_Encoder_Cnt16_CTRL2_IRQ_SEL_SHIFT     0x00u
    #define Left_Encoder_Cnt16_CTRL2_IRQ_SEL          (0x01u << Left_Encoder_Cnt16_CTRL2_IRQ_SEL_SHIFT)     
    
    /* Status Register Bit Locations */
    #define Left_Encoder_Cnt16_STATUS_ZERO_SHIFT      0x07u  /* As defined in Register Map, part of TMRX_SR0 register */ 

    /* Status Register Interrupt Enable Bit Locations */
    #define Left_Encoder_Cnt16_STATUS_ZERO_INT_EN_MASK_SHIFT      (Left_Encoder_Cnt16_STATUS_ZERO_SHIFT - 0x04u)

    /* Status Register Bit Masks */                           
    #define Left_Encoder_Cnt16_STATUS_ZERO            (0x01u << Left_Encoder_Cnt16_STATUS_ZERO_SHIFT)

    /* Status Register Interrupt Bit Masks*/
    #define Left_Encoder_Cnt16_STATUS_ZERO_INT_EN_MASK       (Left_Encoder_Cnt16_STATUS_ZERO >> 0x04u)
    
    /*RT1 Synch Constants: Applicable for PSoC3 ES2/PSoC3 ES3 PSoC5 ES2*/
    #define Left_Encoder_Cnt16_RT1_SHIFT            0x04u
    #define Left_Encoder_Cnt16_RT1_MASK             (0x03u << Left_Encoder_Cnt16_RT1_SHIFT)  /* Sync TC and CMP bit masks */
    #define Left_Encoder_Cnt16_SYNC                 (0x03u << Left_Encoder_Cnt16_RT1_SHIFT)
    #define Left_Encoder_Cnt16_SYNCDSI_SHIFT        0x00u
    #define Left_Encoder_Cnt16_SYNCDSI_MASK         (0x0Fu << Left_Encoder_Cnt16_SYNCDSI_SHIFT) /* Sync all DSI inputs */
    #define Left_Encoder_Cnt16_SYNCDSI_EN           (0x0Fu << Left_Encoder_Cnt16_SYNCDSI_SHIFT) /* Sync all DSI inputs */
    
#else /* !Left_Encoder_Cnt16_UsingFixedFunction */
    #define Left_Encoder_Cnt16_STATUS               (* (reg8 *) Left_Encoder_Cnt16_CounterUDB_sSTSReg_nrstSts_stsreg__STATUS_REG )
    #define Left_Encoder_Cnt16_STATUS_PTR           (  (reg8 *) Left_Encoder_Cnt16_CounterUDB_sSTSReg_nrstSts_stsreg__STATUS_REG )
    #define Left_Encoder_Cnt16_STATUS_MASK          (* (reg8 *) Left_Encoder_Cnt16_CounterUDB_sSTSReg_nrstSts_stsreg__MASK_REG )
    #define Left_Encoder_Cnt16_STATUS_MASK_PTR      (  (reg8 *) Left_Encoder_Cnt16_CounterUDB_sSTSReg_nrstSts_stsreg__MASK_REG )
    #define Left_Encoder_Cnt16_STATUS_AUX_CTRL      (*(reg8 *) Left_Encoder_Cnt16_CounterUDB_sSTSReg_nrstSts_stsreg__STATUS_AUX_CTL_REG)
    #define Left_Encoder_Cnt16_STATUS_AUX_CTRL_PTR  ( (reg8 *) Left_Encoder_Cnt16_CounterUDB_sSTSReg_nrstSts_stsreg__STATUS_AUX_CTL_REG)
    #define Left_Encoder_Cnt16_CONTROL              (* (reg8 *) Left_Encoder_Cnt16_CounterUDB_sCTRLReg_AsyncCtl_ctrlreg__CONTROL_REG )
    #define Left_Encoder_Cnt16_CONTROL_PTR          (  (reg8 *) Left_Encoder_Cnt16_CounterUDB_sCTRLReg_AsyncCtl_ctrlreg__CONTROL_REG )

    /********************************
    *    Constants
    ********************************/
    /* Control Register Bit Locations */
    #define Left_Encoder_Cnt16_CTRL_CMPMODE0_SHIFT    0x00u       /* As defined by Verilog Implementation */
    #define Left_Encoder_Cnt16_CTRL_CAPMODE0_SHIFT    0x03u       /* As defined by Verilog Implementation */
    #define Left_Encoder_Cnt16_CTRL_RESET_SHIFT       0x06u       /* As defined by Verilog Implementation */
    #define Left_Encoder_Cnt16_CTRL_ENABLE_SHIFT      0x07u       /* As defined by Verilog Implementation */
    /* Control Register Bit Masks */
    #define Left_Encoder_Cnt16_CTRL_CMPMODE_MASK      (0x07u << Left_Encoder_Cnt16_CTRL_CMPMODE0_SHIFT)  
    #define Left_Encoder_Cnt16_CTRL_CAPMODE_MASK      (0x03u << Left_Encoder_Cnt16_CTRL_CAPMODE0_SHIFT)  
    #define Left_Encoder_Cnt16_CTRL_RESET             (0x01u << Left_Encoder_Cnt16_CTRL_RESET_SHIFT)  
    #define Left_Encoder_Cnt16_CTRL_ENABLE            (0x01u << Left_Encoder_Cnt16_CTRL_ENABLE_SHIFT) 

    /* Status Register Bit Locations */
    #define Left_Encoder_Cnt16_STATUS_CMP_SHIFT       0x00u       /* As defined by Verilog Implementation */
    #define Left_Encoder_Cnt16_STATUS_ZERO_SHIFT      0x01u       /* As defined by Verilog Implementation */
    #define Left_Encoder_Cnt16_STATUS_OVERFLOW_SHIFT  0x02u       /* As defined by Verilog Implementation */
    #define Left_Encoder_Cnt16_STATUS_UNDERFLOW_SHIFT 0x03u       /* As defined by Verilog Implementation */
    #define Left_Encoder_Cnt16_STATUS_CAPTURE_SHIFT   0x04u       /* As defined by Verilog Implementation */
    #define Left_Encoder_Cnt16_STATUS_FIFOFULL_SHIFT  0x05u       /* As defined by Verilog Implementation */
    #define Left_Encoder_Cnt16_STATUS_FIFONEMP_SHIFT  0x06u       /* As defined by Verilog Implementation */
    /* Status Register Interrupt Enable Bit Locations - UDB Status Interrupt Mask match Status Bit Locations*/
    #define Left_Encoder_Cnt16_STATUS_CMP_INT_EN_MASK_SHIFT       Left_Encoder_Cnt16_STATUS_CMP_SHIFT       
    #define Left_Encoder_Cnt16_STATUS_ZERO_INT_EN_MASK_SHIFT      Left_Encoder_Cnt16_STATUS_ZERO_SHIFT      
    #define Left_Encoder_Cnt16_STATUS_OVERFLOW_INT_EN_MASK_SHIFT  Left_Encoder_Cnt16_STATUS_OVERFLOW_SHIFT  
    #define Left_Encoder_Cnt16_STATUS_UNDERFLOW_INT_EN_MASK_SHIFT Left_Encoder_Cnt16_STATUS_UNDERFLOW_SHIFT 
    #define Left_Encoder_Cnt16_STATUS_CAPTURE_INT_EN_MASK_SHIFT   Left_Encoder_Cnt16_STATUS_CAPTURE_SHIFT   
    #define Left_Encoder_Cnt16_STATUS_FIFOFULL_INT_EN_MASK_SHIFT  Left_Encoder_Cnt16_STATUS_FIFOFULL_SHIFT  
    #define Left_Encoder_Cnt16_STATUS_FIFONEMP_INT_EN_MASK_SHIFT  Left_Encoder_Cnt16_STATUS_FIFONEMP_SHIFT  
    /* Status Register Bit Masks */                
    #define Left_Encoder_Cnt16_STATUS_CMP             (0x01u << Left_Encoder_Cnt16_STATUS_CMP_SHIFT)  
    #define Left_Encoder_Cnt16_STATUS_ZERO            (0x01u << Left_Encoder_Cnt16_STATUS_ZERO_SHIFT) 
    #define Left_Encoder_Cnt16_STATUS_OVERFLOW        (0x01u << Left_Encoder_Cnt16_STATUS_OVERFLOW_SHIFT) 
    #define Left_Encoder_Cnt16_STATUS_UNDERFLOW       (0x01u << Left_Encoder_Cnt16_STATUS_UNDERFLOW_SHIFT) 
    #define Left_Encoder_Cnt16_STATUS_CAPTURE         (0x01u << Left_Encoder_Cnt16_STATUS_CAPTURE_SHIFT) 
    #define Left_Encoder_Cnt16_STATUS_FIFOFULL        (0x01u << Left_Encoder_Cnt16_STATUS_FIFOFULL_SHIFT)
    #define Left_Encoder_Cnt16_STATUS_FIFONEMP        (0x01u << Left_Encoder_Cnt16_STATUS_FIFONEMP_SHIFT)
    /* Status Register Interrupt Bit Masks  - UDB Status Interrupt Mask match Status Bit Locations */
    #define Left_Encoder_Cnt16_STATUS_CMP_INT_EN_MASK            Left_Encoder_Cnt16_STATUS_CMP                    
    #define Left_Encoder_Cnt16_STATUS_ZERO_INT_EN_MASK           Left_Encoder_Cnt16_STATUS_ZERO            
    #define Left_Encoder_Cnt16_STATUS_OVERFLOW_INT_EN_MASK       Left_Encoder_Cnt16_STATUS_OVERFLOW        
    #define Left_Encoder_Cnt16_STATUS_UNDERFLOW_INT_EN_MASK      Left_Encoder_Cnt16_STATUS_UNDERFLOW       
    #define Left_Encoder_Cnt16_STATUS_CAPTURE_INT_EN_MASK        Left_Encoder_Cnt16_STATUS_CAPTURE         
    #define Left_Encoder_Cnt16_STATUS_FIFOFULL_INT_EN_MASK       Left_Encoder_Cnt16_STATUS_FIFOFULL        
    #define Left_Encoder_Cnt16_STATUS_FIFONEMP_INT_EN_MASK       Left_Encoder_Cnt16_STATUS_FIFONEMP         
    

    /* StatusI Interrupt Enable bit Location in the Auxilliary Control Register */
    #define Left_Encoder_Cnt16_STATUS_ACTL_INT_EN     0x10u /* As defined for the ACTL Register */
    
    /* Datapath Auxillary Control Register definitions */
    #define Left_Encoder_Cnt16_AUX_CTRL_FIFO0_CLR         0x01u   /* As defined by Register map */
    #define Left_Encoder_Cnt16_AUX_CTRL_FIFO1_CLR         0x02u   /* As defined by Register map */
    #define Left_Encoder_Cnt16_AUX_CTRL_FIFO0_LVL         0x04u   /* As defined by Register map */
    #define Left_Encoder_Cnt16_AUX_CTRL_FIFO1_LVL         0x08u   /* As defined by Register map */
    #define Left_Encoder_Cnt16_STATUS_ACTL_INT_EN_MASK    0x10u   /* As defined for the ACTL Register */
    
#endif /* Left_Encoder_Cnt16_UsingFixedFunction */

#endif  /* CY_COUNTER_Left_Encoder_Cnt16_H */


/* [] END OF FILE */
