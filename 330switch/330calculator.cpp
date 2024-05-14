#include<stdio.h>
#include<stdlib.h>
int main (void){
	int a,b;
	char oper;
	printf("What do you want to calculate\n");
	scanf("%d %c %d",&a,&oper,&b);
	
	switch(oper){
		case '+':
			printf("%d+%d=%d\n",a,b,a+b);
			break;
		case '-':
			printf("%d-%d=%d\n",a,b,a-b);
			break;
		case'*':
			printf("%d*%d=%d\n",a,b,a*b);
			break;
		case'/':
			printf("%d/%d=%f\n",a,b,(float)a/b);
			break;
		default:
			printf("Error!Plesae enter again\n");
	}
	
	system("pause");
	return 0;
}
