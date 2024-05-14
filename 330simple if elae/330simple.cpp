#include<stdio.h>
#include<stdlib.h>

int main(void){
	int num1, num2,larger;
	printf("Please enter tow integers\n");
	scanf("%d%d",&num1,&num2);

	num1>num2 ? (larger=num1):(larger=num2);/* you can also write like this ->larger=num1>num2? num1:num2;*/
	printf("%d is bigger\n",larger);
	
	system("pause");
	return 0;
}
