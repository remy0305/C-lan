#include<stdio.h>
#include<stdlib.h>
int main(void){
	char d;/*how bit they use*/
	float b;
	double c;
	int a;
	
	printf("sizeof(2L)=%d\n",sizeof(2L));
	
	printf("sizeof(a)=%d\n",sizeof(a));
	printf("sizeof(b)=%d\n",sizeof(b));
	printf("sizeof(c)=%d\n",sizeof(c));
	printf("sizeof(d)=%d\n",sizeof(d));
	
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(long)=%d\n",sizeof(long));
	printf("sizeof(short)=%d\n",sizeof(short));
	
	system("pause");
	return 0;
	}
