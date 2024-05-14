  #include<stdio.h>
#include<stdlib.h>
double power(double base ,int num1){
	int i;
	double pow=1.0;
	for(i=1;i<=num1/2;i++)
		pow=pow*base;
	
	return pow;
}

int main (void){
	double num1;
	int x;//second power
	printf("Please enter a number");
	scanf("%d",&x);
	
	printf("Please enter its second power");
	scanf("%lf",&num1);
	printf("%d to the power %lf = %lf\n",x,num1,power(x,num1));
	
	system ("pause");
	return 0;
}
