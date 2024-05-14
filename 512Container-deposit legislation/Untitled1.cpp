#include<stdio.h>
#include<stdlib.h>
int main (void){
	int total,eb=0,a;//eb=empty bottle //total=cola
	scanf("%d",&total);
	a=total;
	
	do {
	eb=total/3;
	printf("eb=%d\n",eb);
	total=total%3;
	printf("total=%d\n",total);
	total=eb+total;
	a+=eb;
	printf("total=%d\n",total);
	printf("%d\n",a);
	system("pause");
	}while(total>=3);
	
	if(total==2)
		a++;
	printf("%d\n",a);
	
	system("pause");
	return 0;
} 
