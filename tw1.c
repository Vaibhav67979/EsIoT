#include "at89c51ed2.h"
void delay(unsigned int);
void main(void) {
while(1) {
P2=0x00;
delay(1000);
P2=0x10;
delay(1000);
P2=0x20;
delay(1000);
P2=0x30;
delay(1000);
}
}
// DELAY GENERATION USING FOR LOOP
void delay(unsigned int itime) {
unsigned int i,j;
for(i=0;i<itime;i++)
for(j=0;j<1275;j++);
}
