#ifndef __USART_H__
#define __USART_H__

#include <sys/types.h>
#include "stm32f4xx_conf.h"

/* Define the max number of USART streaming going to be written out. */
#ifndef MAX_USART_STREAM
#define MAX_USART_STREAM	5
#endif

/* Define USART sending mode. */
#define BLOCKING		0
#define NON_BLOCKING	1

/* Initialize the USART6. */
void setup_usart(void);
/* USART read 1 byte. */
#define USART_ReadByte(USARTx)		(USART_ReceiveData(USARTx))
/* USART send 1 byte. */
#define USART_SendByte(USARTx, b)	(USART_SendData(USARTx, b))
/* Send bytes array with designated length through USART. */
ssize_t USART_Send(USART_TypeDef *, void *, ssize_t, uint8_t);
/* Print the string through USART with blocking. */
void USART_Printf(USART_TypeDef* USARTx, char *str);

#endif
