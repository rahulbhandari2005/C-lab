//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main(void)
{
	int num1,num2,temp;
	printf("Enter first number ");
	scanf("%d",&num1);
	printf("Enterr second no ");
	scanf("%d",&num2);
	printf("input :  %d  %d \n",num1,num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("After Swap \n Output: %d  %d ",num1,num2);
}
