#include<stdio.h>
#include<stdlib.h>
int main(void){
	float num1=123.45678912345f;
	double num2=123.456789012345;

	printf("num1=%16.12f\nnum2=%16.12f\n",num1,num2);
	
	system("pause");
	return 0;
}
/*float can save 8 bit
  double can save 16 bit*/
