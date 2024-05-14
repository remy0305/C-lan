#include<stdio.h>
#include<stdlib.h> 
int main (void){
	int i=1, sum=0;
	while(sum<=100){
		sum+=i;
		printf("%d+%d=%d\n",sum-1,i,sum);
		i++;
	}
	system("pause");
	return 0;
}
