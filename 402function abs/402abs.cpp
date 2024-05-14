#include<stdio.h>
#include<stdlib.h>
int abs(int n){
	if(n<0)
		return -n;
	else
		return n;
		
} 
int main (void){
	int n;
	printf("Input an integer : ");
	scanf("%d",&n);
	printf("abs(%d)=%d\n",n,abs(n));
	
	system("pause");
	return 0;
	}
