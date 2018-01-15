/*
 * main.c
 *
 *  Created on: Nov 6, 2017
 *      Author: gc
 */
#include "a2d.h"
extern uint8_t rxbyte;    //rxbyte as check for data to send
int main()
{
	//setup
	uart_init();  //initalize usart
	adc_init();    //initialize adc
	//LOOP
	while(1)
	{
		_delay_ms(1000);
        adc_convert();   //make adc conversions
	    uart_send_string(rxbyte);  // string to be sent in "___"
	}
}
