#include<stdio.h>
#include<stdlib.h>
int main (void) {
	int i,count=0;
	
	for (i=1;i<=10000;i++)
	   if ((rand()%6+1)==3)
	    count++;
	
	printf("Roll the dice 10000 times,the number of times 3 points appear is %d times\n",count);
	printf("the probability is %.3f\n",(float)count/10000);
	
	system("pause");
	return 0;
}
