#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i=298; /*298 Binary = 0100101010 only read 8 bit on last,so Binary 00101010= decimal42*/
	printf("ascii(%d)=%c\n",i,i);
	
	system("pause");
	return 0;
}
