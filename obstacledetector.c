#define F_CPU 8000000
#include<avr/io.h>
#include<util/delay.h>
int main()
{
	DDRC=0xFF;
	DDRA=0b11111100;
	DDRB=0xFF;
	while(1)
	{
	PORTB=0xFF;
		if(PINA==00000011)
		{
			PORTB=0b00000000;
			_delay_ms(1000);
		}
		if(PINA==00000000)
		{
			PORTB=0b00001010;
			_delay_ms(1000);
		}
	}
}

