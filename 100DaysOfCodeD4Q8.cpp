//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>

int main(void)
{
	
	int a=0; int sum=0;
	printf("Enter n for the sum of natural numbers ");
	scanf("%d",&a);
	sum=(1+a)*a/2;
	printf("sum for n natural number is %d ",sum);
}
