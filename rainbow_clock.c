/*
 * rainbow_clock.c
 *
 * Created: 20.09.2017 17:54:09
 *  Author: Постников
 */ 

#define F_CPU 8000000

#define TRUE	1
#define FALSE	0

#define LED_PORT	PORTC
#define LED_PIN		PORTC0

#include <avr/io.h>
#include <avr/interrupt.h>
//#include "rainbow.c"
#include "pow_char.h"
#include "num2ascii.c"
//#include "i2c.c"
#include "uart_buff.c"

//unsigned char rgb_array[LED_NUM][3] = {{0x00, 0xFF, 0x00}, {0x80, 0xFF, 0x00}, {0xFF, 0xFF, 0x00}, {0xFF, 0x00, 0x00}, {0x80, 0x00, 0xFF}, {0x00, 0x00, 0xFF}, {0x00, 0xFF, 0xFF}};


/*
ISR(TIMER2_OVF_vect){
	second_handler();
	rainbow_clock2();
	smartled();
}*/

int main(void)
{
	DDRC = 1<<LED_PIN;
	
	//rtc_init();
	
	/*t.minute = 45;
	t.hour = 15;
	rainbow_fill();
	smartled();
	sei();												//Set the Global Interrupt Enable Bit
	*/
	uart_init();
	unsigned int blalbla = pow_char(10, 4);
	uart_send_word(blalbla);

    while(1){
		
    }
}