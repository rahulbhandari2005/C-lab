#include <stdio.h>

int main()

{
	
	int a=0;
	printf("enter the no of month from 1 to 12 \n");
	scanf("%d",&a);
	
	switch(a)
	{
	
	case 1: printf("January, 31 days");
	break;
	
	case 2: printf("Feburary, 28 days");
	break;
	
	case 3: printf("March, 31 days");
	break;
	
	case 4: printf(" April, 30 days");
	break;
	
	case 5: printf("May, 31 days");
	break;
	
	case 6: printf("June, 30");
	break;
	
	case 7: printf("July, 31");
	break;
	
	case 8: printf("August, 31");
	break;
	
	case 9: printf("September, 30 days");
	break;
	
	case 10: printf("October, 31 days");
	break;
	
	case 11: printf("November, 30 days");
	break;
	
	case 12: printf("December, 31 days");
	break;
	
	default: printf("error enter a number betweem 1 t0 12");
	break;
}
	return 0;
}
