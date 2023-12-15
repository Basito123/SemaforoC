#include <avr/io.h>
#include <util/delay.h>

#define LuzVerde1        PB0
#define LuzAmarillo1      PB1
#define LuzRojo1          PB2

#define LuzVerde2         PB3
#define LuzAmarillo2      PB4
#define LuzRojo2          PB5

#define LuzVerde3         PC1
#define LuzAmarillo3      PC2
#define LuzRojo3          PC3

#define LuzVerde4         PC4
#define LuzAmarillo4      PC5
#define LuzRojo4          PC0



int main()
{
	DDRB = 0xFF;    
	DDRC = 0xFF;    
	DDRD = 0xFF;    

	while(1)
	{
		PORTB = (1 << LuzVerde1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		_delay_ms(5000);
		
		PORTB = (0 << LuzVerde1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzVerde1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (0 << LuzVerde1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzVerde1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);    
		PORTB = (0 << LuzVerde1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzAmarillo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);    
		
		
		//-----
		
		
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzVerde3) | (1 << LuzRojo4);
		_delay_ms(5000);
		
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (0 << LuzVerde3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzVerde3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (0 << LuzVerde3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzVerde3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (0 << LuzVerde3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzAmarillo3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		
		
		//----
		
		PORTB = (1 << LuzRojo1) | (1 << LuzVerde2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		_delay_ms(5000);
		
		PORTB = (1 << LuzRojo1) | (0 << LuzVerde2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
			
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzVerde2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
			
		_delay_ms(800);
			
		PORTB = (1 << LuzRojo1) | (0 << LuzVerde2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzVerde2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (0 << LuzVerde4);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzAmarillo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzRojo4);
		
		_delay_ms(800);
		
		
		//---
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzVerde4) ;
		_delay_ms(5000);
		
			
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzVerde4);
			
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (0 << LuzVerde4);
			
		_delay_ms(800);
			
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzVerde4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (0 << LuzVerde4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzVerde4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (0 << LuzVerde4);
		
		_delay_ms(800);
		PORTB = (1 << LuzRojo1) | (1 << LuzRojo2);
		PORTC = (1 << LuzRojo3) | (1 << LuzAmarillo4);	
		
	}

	return 0;
}
