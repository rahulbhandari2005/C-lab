//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()

{
	
	int a,b,n;
	a=1;
	printf("enter a number");
	scanf("%d",&n);
	
	while(n!=0)
	{
		b=n%10;
		if(b%2!=0)
		{
			a=a*b;
		}
		n/=10;
	}
	printf("%d",a);
	return 0;
}
