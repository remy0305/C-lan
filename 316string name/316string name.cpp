#include<stdio.h>
#include<stdlib.h>
int main(void){
	char name[10];
	
	printf("what\'s your name :\n");
	scanf("%s",&name);
	printf("Hi, % s . How are you?\n",name);
	system("pause");
	return 0;
	}
