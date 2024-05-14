#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
	char ch=0;
	while(ch!=17)
	{
		ch=getch();
		printf("ASCII of ch=%d\n",ch);
	}
	printf("you already purss Ctrl+q...\n");//Ctrl+p in aseii =17
	
}
