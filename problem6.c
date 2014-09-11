/* Compiler directives (includes and defines) */
#include "msp430x44x.h" 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
/* Function prototypes */
void setupP3_in();
void setupP3_out();
void P3inOut();
/*** Implement your functions here ***/


void setupP3_in(){
}

void setupP3_out(){
	P3SEL &= ~(BIT7|BIT5|BIT3|BIT1);
	P3DIR |=  (BIT7|BIT5|BIT3|BIT1);
}

void P3inOut(){
	char outbits = P3IN;
	outbits << 1;
	//Set the state of all outputs to off
	P3OUT &= (BIT7|BIT5|BIT3|BIT1);
	//Set the correct value
	P3OUT |= ~(outbits);
}


/* Write your main() here */
void main()
{
	//Setup the input pins
	setupP3_in();
	//Setup the output pins
	setupP3_out();
	//Forever
	for(;;){
		//Read inputs and print outputs
		P3inOut();
	}
}