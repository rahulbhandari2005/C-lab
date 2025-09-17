//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main()
{
	long long int a=1; int n,i;
	printf("enter n for product of n even numbers");
	scanf("%d",&n);
	
	
	for(i=2;i<=n;i=i+2)
	{
		a=a*i;
	}
	printf("product of even no from 1 to %d = %11d",n,a);
	return 0;
}
