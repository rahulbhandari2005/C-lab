//Write a program to check if a number is an Armstrong number
#include <stdio.h>
int main()
{
	int n,a,b,c;
	printf("enter a number");
	scanf("%d",&n);
	b=n;
	while(n!=0)
	{
		a=n%10;
		c=(a*a*a)+c;
		n/=10;
	}
	
	if(c==b)
	{
		printf("armstrong number");
		
	}
	else
	{
		printf("not armstrong");
	}
	
	return 0;
}
