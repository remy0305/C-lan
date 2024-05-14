#include<stdio.h>
#include<stdlib.h>
double leibniz(int);
double power(double,int);
int main (void){
	for(int i=1;i<=10000;i++)
		printf("leibnoiz(%d)=%12.10f\n",i,leibniz(i));
		
	system("pause");
	return 0;
}
double leibniz(int n){
	double sum=0;
	for(int k=1;k<=n;k++)
		sum=sum+power(-1.0,k-1)/(2*k-1);
	return 4*sum;
}
double power(double base, int n){
	double pow=1.0;
	for(int i=1;i<=n;i++)
		pow=pow*base;
	return pow;
}
