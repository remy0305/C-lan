#include<stdio.h>
#include<stdlib.h>
int main (void){
	int i=1,j=1;
	while(i<=9){
		while(j<=9){
		 printf("%d*%d=%2d ",i,j,i*j);
		 j++;
		}
	 printf("\n");
	 j=1;
	 i++;
	}
	
	system("pause");
	return 0;
}
