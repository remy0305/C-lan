#include<stdio.h>
#include<stdlib.h>
int main (void){
	int n,i=1,fact=1;
	do{
		printf("Please enter n(n>0)\n");
		scanf("%d",&n);
	}while(n<=0);
	
	do 
	 fact*=i++;
	while(i<=n);
	printf("%d!=%d\n",n,fact);
	
	system("pause");
	return 0;
}
