#include<stdio.h>
#include<stdlib.h>
int main(void){
	int num1=12345;
	float num3=123.456;
	
	printf("%10d\n%+d\n%09d\n%-10d\n%d\n",num1,num1,num1,num1,num1);
	printf("%7.2f\n%010.3f\n%+10.4f",num3,num3,num3);

	return 0 ;
	}
