/*
 */

#include <avr/io.h>
#include "Activity1.h"
#include "Activity2.h"
#include <util/delay.h>
#include <stdint.h>


int main(void)
{
    inisialise_ports();
    init_ADC();
    uint16_t temp;

    while(1)
          {
              if(CHECKSEAT)
              {
                    PORTB|=(1<<PB0);
                    _delay_ms(20);

                    temp= ReadADC(0);
                    _delay_ms(200);

              }
               else
                {
                    PORTB&=~(1<<PB0);
                    _delay_ms(200);
                }
          }


    return 0;
}
