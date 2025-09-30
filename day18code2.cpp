//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
	
	int a,b,c,d,n;
	printf("enter two number");
	scanf("%d%d",&a,&n);
	
	if(n>a)
	{
	for(int i=n; i>0; i--)
	{
		if(n%i==0&&a%i==0)
		{
			printf(" %d ",i);
			break;
		}
		
		
	
	}
}
	else
	{
		for(int j=a;j>0;j--)
		{
				if(n%j==0&&a%j==0)
		{
			printf(" %d ",j);
			break;
		}
		}
	}
	
	return 0;
}
