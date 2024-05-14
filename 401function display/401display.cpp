#include<stdio.h>
#include<Stdlib.h>
int display(char ch,int n){
	int time;
	for(time=1;time<=n;time++)
		printf("%c",ch);
	
	printf("\n");
	
}
int main(void){
	int n;
	char ch;
	printf("Please enter a character: ");
	scanf("%c",&ch);
	printf("How does character do you want copy: ");
	scanf("%d",&n);
	display(ch,n);
	system("pause");
	return 0;
}
