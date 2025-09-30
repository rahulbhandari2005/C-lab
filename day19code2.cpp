//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()

{
	
	int a,b,n;
	a=0;
	printf("enter a number");
	scanf("%d",&n);
	
	while(n!=0)
	{
		b=n%10;
		a=a+b;
		n/=10;
	}
	printf("%d",a);
	return 0;
}
