#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
	char ch;
	printf("Please enter a character: ");
	ch=getchar();
	printf("The character yor enter is ");
	putchar(ch);
	putchar('\n');
	
	printf("Please enter a character again: \n");
	ch=getche();
	printf("The character yor enter is %c\n",ch);
	
	printf("Please enter a character again: \n");
	ch=getch();
	printf("The character yor enter is %c\n",ch);
	
	system ("pause");
	return 0;
}
/*getchar,putchar only read character*/
/*getch() reads a single character from the keyboard. 
It doesn't use any buffer, so the entered character is returned immediately without waiting for the enter key.
 getche() reads a character from the keyboard and displays it immediately on the output screen, without waiting for the enter key.*/



