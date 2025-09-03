//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main(void)
{
	
	int num1=0; int num2=0;
	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("Input: %d  %d \n",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("Output: %d  %d ",num1,num2);
}
