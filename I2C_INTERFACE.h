/*
 * I2C_INTERFACE.h
 *
 *  Created on: Mar 2, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef I2C_INTERFACE_H_
#define I2C_INTERFACE_H_

typedef enum
{
	NOK,
	OK
}I2C_ERROE_STATUS;

             /*												TWSR												*/

#define 													TWPS0										0
#define 													TWPS1										0

             /*												TWCR												*/

#define 													TWINT										7
#define 													TWEA										6
#define 													TWSTA										5
#define 													TWSTO										4
#define 													TWWC										3
#define 													TWEN										2
#define 													TWIE										0

             /*												TWAR												*/
#define 													TWGCE										0


void I2C_INIT_MASTER(void);
void I2C_VID_INIT_SLAVE(u8 LOC_U8_adress);
I2C_ERROE_STATUS I2C_ErrorStatus_START_CONDTION(void);
void I2C_ErrorStatus_STOP_CONDITION(void);
I2C_ERROE_STATUS I2C_ErrorStatus_MASTER_SEND_SLAVE_ADD_W(u8 LOC_U8_address);
I2C_ERROE_STATUS I2C_ErrorStatus_MASTER_SEND_SLAVE_ADD_R(u8 LOC_U8_address);
I2C_ERROE_STATUS I2C_ErrorStatus_MASTER_WRITE_BYTE_TO_SLAVE(u8 LOC_U8_DATA);
I2C_ERROE_STATUS I2C_ErrorStatus_MASTER_READ_BYTE_FROM_SLAVE(u8* ptr);
I2C_ERROE_STATUS I2C_ErrorStatus_REPEATED_START_CONDITION(void);
I2C_ERROE_STATUS I2C_ErrorStatus_SLAVE_CHECK_ABOUT_ADD_SLA_W(void);  /*THIS  FUNTION FOR WAIT SLAVE ADD AND CHECK IT*/
I2C_ERROE_STATUS I2C_ErrorStatus_SLAVE_CHECK_ABOUT_ADD_SLA_R(void);  /*THIS  FUNTION FOR WAIT SLAVE ADD AND CHECK IT*/
I2C_ERROE_STATUS I2C_ErrorStatus_SLAVE_WRITE_BYTE_TO_MASTER(u8 LOC_U8_DATA);
I2C_ERROE_STATUS I2C_ErrorStatus_SLAVE_READ_BYTE_FROM_MASTER(u8* PTR);

#endif /* I2C_INTERFACE_H_ */
