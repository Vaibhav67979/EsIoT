#include "at89c51ed2.h"

void T1M2Delay(void);

void main(){
	while(1){
		P2 = 0x00;
		T1M2Delay();
		P2 = 0x10;
		T1M2Delay();
		P2 = 0x20;
		T1M2Delay();
		P2 = 0x30;
		T1M2Delay();
	}
}

void T1M2Delay(void){
	TMOD = 0x20;
	TL1 = 0xE9;
	TR1 = 1;
	while(TF1);
	TR1 = 0;
	TF1 = 0;
}