#include "at89c51ed2.h"

void T1M1Delay(void);

void main(){
	while(1){
		P2 = 0x00;
		T1M1Delay();
		P2 = 0x10;
		T1M1Delay();
		P2 = 0x20;
		T1M1Delay();
		P2 = 0x30;
		T1M1Delay();
	}	
}

void T1M1Delay(void){
	TMOD = 0x10;
	TL1 = 0xFE; 
	TH1	= 0x4B;
	TR1 = 1;
	while(TF1 == 0);
	TR1 = 0;
	TF1 = 0;
}