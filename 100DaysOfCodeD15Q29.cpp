//Write a program to calculate the factorial of a number
#include <stdio.h>
int main()
{
	long a=1; int n; int i;
	printf(" enter the number for factorial");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	printf("factorial of %d is : %d",n,a);
	return 0;
	
}
