/*
 * initalize.h
 *
 *  Created on: Mar 21, 2019
 *      Author:
 */

#ifndef INITIALIZE_H_
#define INITIALIZE_H_

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

// TODO: Initialization #defines

// TODO: Master Init function prototype: Use this function to call your peripheral-specific functions.
//       That way you can call a single function in main.
void initialize(void);

// TODO: Initialization function prototypes: Board, GPIO (for PWM output), Timer32, TimerA.
//       In particular, initialize TimerA in UP mode or UPDOWN mode so that you can vary note frequencies using CCR0.

#endif /* INITIALIZE_H_ */
