

/* Function prototypes */ 
void led123_config(); 
void led123_OnOff(char inBits);


void led123_config(){
	P1SEL |= (BYTE0);
	P8SEL |= (BYTE3|BYTE1);

}




void main(void){

}