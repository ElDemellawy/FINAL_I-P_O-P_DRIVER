/*
 * File:   MAIN.c
 * Author: ELDEMELAWY
 *
 * Created on August 8, 2020, 2:38 AM
 */


#include <avr/io.h>

void setpin_a (int pinumber)
{
    PORTA |= (1<<pinumber); //high
}

void setpin_b (int pinumber)
{
    PORTB |= (1<<pinumber);
}

void setpin_c (int pinumber)
{
    PORTC |= (1<<pinumber);
}

void setpin_d (int pinumber)
{
    PORTD |= (1<<pinumber);
}


void resetpin_a (int pinumber)
{
     PORTA &= ~(1<<pinumber); // low 
}

void resetpin_a (int pinumber)
{
    PORTB &= ~(1<<pinumber);
}

void resetpin_a (int pinumber)
{
    PORTC &= ~(1<<pinumber);
}
void resetpin_a (int pinumber)
{
    PORTD &= ~(1<<pinumber);
}

int ispreseda (int pinumber_button, int pinumber_HLselection)
{
    if (PINA & (1<<pinumber_button)) 
        {
            setpin_a (pinumber_HLselection);
        }
        else
        {
            resetpin_a (pinumber_HLselection);
        }
}

int ispresedb (int pinumber_button, int pinumber_HLselection)
{
    if (PINB & (1<<pinumber_button)) 
        {
            setpin_b (pinumber_HLselection);
        }
        else
        {
            resetpin_b (pinumber_HLselection);
        }
}
 
int ispresedc (int pinumber_button, int pinumber_HLselection)
{
    if (PINC & (1<<pinumber_button)) 
        {
            setpin_c (pinumber_HLselection);
        }
        else
        {
            resetpin_c (pinumber_HLselection);
        }
}

int ispresedd (int pinumber_button, int pinumber_HLselection)
{
    if (PINB & (1<<pinumber_button)) 
        {
            setpin_d (pinumber_HLselection);
        }
        else
        {
            resetpin_d (pinumber_HLselection);
        }
}

void portaas_ (int dir)
{
    switch (dir)
    {
        case OUT :
            DDRA = 0xFF;
            break ;
        
        case IN :
            DDRA =0x00;
            break;
    }
}

void portbas_ (int dir)
{
    switch (dir)
    {
        case OUT :
            DDRB = 0xFF;
            break ;
        
        case IN :
            DDRB =0x00;
            break;
    }
}

void portcas_ (int dir)
{
    switch (dir)
    {
        case OUT :
            DDRC = 0xFF;
            break ;
        
        case IN :
            DDRC =0x00;
            break;
    }
}
void portdas_ (int dir)
{
    switch (dir)
    {
        case OUT :
            DDRD = 0xFF;
            break ;
        
        case IN :
            DDRD =0x00;
            break;
    }
}

void pinaas_ (int pinumber,int dir)
{
    switch (dir)
    {
        case OUT :
        DDRA |= (1<<pinumber);
        break;
        
        case IN :
        DDRA  &= ~(1<<pinumber);
        break;
    }
}

void pinbas_ (int pinumber,int dir)
{
    switch (dir)
    {
        case OUT :
        DDRB |= (1<<pinumber);
        break;
        
        case IN :
        DDRB  &= ~(1<<pinumber);
        break;
    }
}

void pincas_ (int pinumber,int dir)
{
    switch (dir)
    {
        case OUT :
        DDRC |= (1<<pinumber);
        break;
        
        case IN :
       DDRC &= ~(1<<pinumber);
       break;
    }
}

 void pindas_ (int pinumber,int dir)
{
    switch (dir)
    {
        case OUT :
        DDRD |= (1<<pinumber);
        break;
        
        case IN :
        DDRD  &= ~(1<<pinumber);
        break;
    }
}
 
int main(void) {
    
    while (1) {
    }
}
