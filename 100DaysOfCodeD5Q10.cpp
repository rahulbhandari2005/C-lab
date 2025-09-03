//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main()
{
	
	int a,b,c,t;
	printf("enter time in seconds");
	scanf("%d",&t);
	a=t/(60*60);
	b=(t%(60*60))/60;
	c=((t%(60*60))%60);
	printf("time i n hour:minute:seconds\n %d : %d : %d",a,b,c);
	return 0;
}
