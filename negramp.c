#include "at89c51ed2.h"
unsigned char count;
void main(){
	while(1){
		for(count=0;count!=0xFF;count++){
			P0 = count;
		}
		for(count=0xFF;count>=0;count--){
			P0 = count;
		}
	}
}
