//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main()

{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	
	if(c>='A'&&c<='Z')
	{
		printf("uppercase alphabet ");
	}
	else if(c>='a'&&c<='z')
	{
		printf("lowercase alphabet ");
		
	}
	else if(c>='0'&&c<='9')
	{
		printf("digit  ");
		
	}
	else
	{
		printf("special character");
	}
	return 0;
}
