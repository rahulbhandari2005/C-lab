//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main()
{
	int a=0;
	printf("enter year");
	scanf("%d",&a);
	
	if(a%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
		
	}
	
	return 0;
}
