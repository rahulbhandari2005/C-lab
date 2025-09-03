//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main(void)
{
	int t=0; float si =0;
	int p=0; float ci =0; float r=0;
	printf("enter time,rate of intrest and priciple amount");
	scanf("%d%f%d",&t,&r,&p);
	
	si =((t*r*p)/100);
	ci =(p*pow((1+r/100),t))-p;
	printf("simple intrest is %f",si);
	printf("compoud intrest is %f",ci);
	
}
