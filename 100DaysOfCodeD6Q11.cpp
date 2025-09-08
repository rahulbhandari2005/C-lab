//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main(void)
{
	int a=0;
	printf("enter a number");
	scanf("%d",&a);
	
	if(a%2==0)
	{
	printf("%d  even number\n",a);
	}
	else
	{ 
	printf("%d  odd number",a);
	}
}
