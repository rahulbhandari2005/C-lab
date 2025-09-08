//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main(void)

{
	int a=0;
	printf("enter an integer");
	scanf("%d",&a);
	if(a>=0)
	{
		if(a==0)
		{
		printf("zero \n");
		}
		else
		{
			printf("positive \n");
		}
		
	}
	else{
		printf("negative");
		
	}
}
