//Write a program to print the sum of the first n odd numbers
#include <stdio.h>
int main()
{
	
	int n; int i=0; int a=0;
	printf(" enter n for first n odd numbers ");
	scanf("%d",&n);
	
	while(i<n)
	{
		a=a+1+(2*i);
		
		i++;
	}
	printf("sum of first %d odd no : %d",n,a);
	return 0;
	
}
