/*
 * UASRT_INTERFACE.h
 *
 *  Created on: Feb 24, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef UASRT_INTERFACE_H_
#define UASRT_INTERFACE_H_

typedef struct{
	u16 TX_DATA:9;

}UTxData;
typedef struct{
	u16 RX_DATA:9;
	u8 nine_data:1;
}URXData;

typedef struct{
	u8 TX_OR_RX:2;
	u8 data_size:4;
	u8 mode_synOrAsyn:1;
	u8 parity_mode:2;
	u8 stop_bits:1;
	u16 BAUD_UBRR;

}init;

typedef struct{

	u8 RXC_INTERRPUT:1;
	u8 txC_INTERRUPT:1;
	u8 UDR_EMPTY_INTERRUPT:1;

}INTTERUPT;


#define 										transimeter													0
#define 										reciever													1
#define 										TX_and_RX						     						2

 /*												DATA SIZE													*/
#define 										DATA_5BIIT						     						0
#define 										DATA_6BIIT						     						1
#define 										DATA_7BIIT						     						2
#define 										DATA_8BIIT						     						3
#define 										DATA_9BIIT						     						7

 /*												USART _MODE													*/
#define 										synchronous						     						1
#define 										Asynchronous					     						0

/*												USART _parity												*/
#define 										disable_parity						     					0
#define 										EVEN_PARITY					     						    1
#define 										ODD_PARITY					     						    2

/*												stop_Bit													*/
#define 										ONE_STOP_BIT						     					0
#define 										TWO_STOP_BIT				     						    1

/*												INTERRUPT_CONTROL									    	*/
#define 										ON									     					1
#define 										OFF							     						    0



void UART_INIT(init UART_STRUCT_INIT);
u16 UART_U8_RECEIVE();
void UART_Void_TX(u16 data_tx);
void USART_INTERRUPT(INTTERUPT UINT);
void RXC_CallBack(void(*ptr)(void));
void TXC_CallBack(void(*ptr)(void));
void UDRE_CallBack(void(*ptr)(void));

void USART_VID_TX_STRING(u8*ptr);
u8*USART_u8ptr_RX_STRING(void);



#endif /* UASRT_INTERFACE_H_ */
