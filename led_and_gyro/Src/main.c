/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
//#include "printer.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

// the board is STM32F303C



int main(void)
{

	// FIXME:fix either printf or ITMPrint both are not working
//	ITMPrint("test\n");
//	printf("test\n");


	// TODO: setup a system to program the LEDs to detect the direction
	// there are 8 led's they can detect the direction in which they are pointed

	// TODO: setup wireless communications that the chip can do to run data



	// TODO: make a client server modal so that the board can send in data and logs



    /* Loop forever */
	for(;;);
}
