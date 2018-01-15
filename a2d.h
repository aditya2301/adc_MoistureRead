/*
 * a2d.h
 *
 *  Created on: Nov 6, 2017
 *      Author: Edward
 */
#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
#ifndef A2D_H_
#define A2D_H_
#define BR 9600
#define BPS ((F_CPU/(BR*16UL))-1)  // setting baud rate registers
void uart_init();
void uart_send(uint8_t senddata);
uint8_t uart_receive();
void uart_send_string(uint8_t *pstr);
void adc_init();
void adc_convert();


#endif /* A2D_H_ */
