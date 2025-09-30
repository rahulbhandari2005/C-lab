//Write a program to check if a number is a palindrome
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
		c=(c*10)+a;
		n/=10;
	}
	
	if(c==b)
	{
		printf("palindrome number");
		
	}
	else
	{
		printf("not palindrome");
	}
	
	return 0;
}
