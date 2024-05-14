#include<stdio.h>
#include<stdlib.h>
int main(void){
	int num;
	char ch;
	
	printf("Please enter a integer\n");
	scanf("%d",&num);
	fflush(stdin);/*clear all thing in buffer*/
	
	printf("Please enter a character.\n");
	scanf("%c",&ch);
	printf("num=%d, ASCII of ch=%d\n",num,ch);
	
	system("pause");
	return 0;
}
/*When you press enter .It will reserve \n & \r in buffer. You can write fflush behind or press space in front %c*/
