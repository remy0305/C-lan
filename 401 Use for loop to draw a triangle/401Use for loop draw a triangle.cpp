#include<stdio.h>
#include<stdlib.h>
int main (void){
	int i,j,n=6;
	
	for(i=1;i<=6;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
