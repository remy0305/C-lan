#include<stdio.h>
#include<stdlib.h>
void func(void);
int main (void){
	int i=0,sum;
	do {
		i++;
		sum+=i;
		printf("%d\n",sum);
	}
	while(sum<=1000);
	printf("%d",i);
	
	system("pause");
	return 0;
}
