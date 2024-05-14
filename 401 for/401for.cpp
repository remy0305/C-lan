#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i;
	for(i=1;i<=10000;i++); //the for loop is idling .Add {} also can do .
	 printf("i=%d\n",i);
	
	system("pause");
	return 0;
}
