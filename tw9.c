#include "at89c51ed2.h"
#include<intrins.h>

void lcd_init(void);
void lcd_comm(void);
void lcd_data(void);

unsigned char xdata arr[16] = {"      CSE"};
unsigned char xdata arr1[16] = {"      BRANCH"};
unsigned char temp1 = 0x00;
unsigned char temp2;
unsigned int i = 0;

void main(){
	AUXR = 0x10;
	lcd_init();
	temp1 = 0x80;
	lcd_comm();
	for(i=0;i<8;i++){
		temp2 = arr[i];
		lcd_data();
	}
	temp1 = 0xC0;
	lcd_comm();
	for(i=0;i<8;i++){
		temp2 = arr1[i];
		lcd_data();
	}
}