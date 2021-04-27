/*
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
DDRB|=(1<<PB0);
DDRD&=~(1<<PD2);
PORTD|=(1<<PD2);
DDRC&=~(1<<PC2);
PORTC|=(1<<PC2);

    while(1)
    {
        if(!(PIND&(1<<PD2))&&!(PINC&(1<<PC2)))
           {
               PORTB|=(1<<PB0);
               _delay_ms(20);
           }
        else
            {
                PORTB&=~(1<<PB0);
               _delay_ms(2000);
            }

    }

    return 0;
}
