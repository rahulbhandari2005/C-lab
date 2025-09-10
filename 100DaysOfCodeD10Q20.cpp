#include <stdio.h>

int main()

{
	
	int a=0;
	printf("enter no of the day from 1 to 7 ");
	scanf("%d",&a);
	
	switch(a)
	{
	
	case 1: printf("MONDAY");
	break;
	
	case 2: printf("TUESDAY");
	break;
	
	case 3: printf("WEDNESDAY");
	break;
	
	case 4: printf(" THURSDAY");
	break;
	
	case 5: printf("FRIDAY");
	break;
	
	case 6: printf("SATURDAY");
	break;
	
	case 7: printf("SUNDAY");
	break;
	
	default: printf("error enter a number betweem 1 t0 7");
	break;
}
	return 0;
}
