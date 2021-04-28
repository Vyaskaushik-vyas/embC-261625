#include <avr/io.h>
#include "Activity1.h"

void inisialise_ports()//TO INITIALISE PORTS
{
    DDRB|=(1<<PB0);//TO MAKE TH PIN AN OUTPUT PIN
    DDRD&=~(1<<PD2);//TO MAKE  IT AS AN INPUT PIN
    PORTD|=(1<<PD2);//PULL UP
    DDRC&=~(1<<PC2);//TO MAKE  IT AS AN INPUT PIN
    PORTC|=(1<<PC2);//PULL UP
}
