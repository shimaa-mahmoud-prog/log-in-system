/*
 * button.h
 *
 *  Created on: Feb 4, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#define RIGHT		1
#define LEFT		2


#define UP			4
#define DOWN		8

void BUTTON_INIT(u8 copy_u8_PORTId,u8 Copy_u8_Button_PIN);
u8 BUTTON_u8_pressedButton(u8 COPY_u8_Button_Port);



#endif /* BUTTON_H_ */
