/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */


#define OUT 1 ;
#define IN 0;

// pins numbers for port A 
#define bin_a0 0
#define bin_a1 1
#define bin_a2 2
#define bin_a3 3
#define bin_a4 4
#define bin_a5 5
#define bin_a6 6
#define bin_a7 7

//pins numbers for port B
#define bin_b0 0
#define bin_b1 1
#define bin_b2 2
#define bin_b3 3
#define bin_b4 4
#define bin_b5 5
#define bin_b6 6
#define bin_b7 7

// pins numbers for port c
#define bin_c0 0
#define bin_c1 1
#define bin_c2 2
#define bin_c3 3
#define bin_c4 4
#define bin_c5 5
#define bin_c6 6
#define bin_c7 7

// pins numbrs for port D
#define bin_d0 0
#define bin_d1 1
#define bin_d2 2
#define bin_d3 3
#define bin_d4 4
#define bin_d5 5
#define bin_d6 6
#define bin_d7 7
 
// set pin funcation (high)
void setpin_a (int pinumber);
void setpin_b (int pinumber);
void setpin_c (int pinumber); 
void setpin_d (int pinumber);

// to reset pin funcation (low)
void resetpin_a (int pinumber);
void resetpin_b (int pinumber);
void resetpin_c (int pinumber);
void resetpin_d (int pinumber);

// FOR BUTTON FUNCATION
int ispreseda (int pinumber_button,int pinumber_HLselection);
int ispresedb (int pinumber_button,int pinumber_HLselection);
int ispresedc (int pinumber_button,int pinumber_HLselection);
int ispresedd (int pinumber_button,int pinumber_HLselection);

// DATA DIRECTION FUNCATION FOR PORTS
void portaas_ (int dir);
void portbas_ (int dir);
void portcas_ (int dir); 
void portdas_ (int dir);

//DATA DIRECTION FUNCATION FOR PINS 
void pinaas_ (int pinumber,int dir);
void pinbas_ (int pinumber,int dir);
void pincas_ (int pinumber,int dir);
void pindas_ (int pinumber,int dir);