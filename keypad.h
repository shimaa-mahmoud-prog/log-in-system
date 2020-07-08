/*
 * keypad.h
 *
 *  Created on: Feb 2, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_


#define PORT_KEYPAD_OUT 		PORTA //HIGH NIBBLE
#define KEY_PATTERN_PORT        PORTA //LOW NIBBLE

u8 GETpressedkey(void);
void KEYPAD_INIT();


#endif /* KEYPAD_H_ */
