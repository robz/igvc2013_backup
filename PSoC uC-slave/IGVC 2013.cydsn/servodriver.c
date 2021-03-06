/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <device.h>
#include <servo.h>
#define SERVO_COMPARE_CENTER 4125
#define SERVO_COMPARE_DEVIATION 2475

void SetLeftMotor(int8 out){
	Servo_0_WriteCompare1(SERVO_COMPARE_CENTER + ((SERVO_COMPARE_DEVIATION * (int16)out) >> 8));
}
void SetRightMotor(int8 out){
	Servo_0_WriteCompare2(SERVO_COMPARE_CENTER + ((SERVO_COMPARE_DEVIATION * (int16)out) >> 8));
}
void SetHokuyoServo(int8 out){
	Servo_1_WriteCompare1(SERVO_COMPARE_CENTER + ((SERVO_COMPARE_DEVIATION * (int16)out) >> 8));
}

void InitializeServo(){
	Servo_0_Start();
	Servo_1_Start();
}



/* [] END OF FILE */
