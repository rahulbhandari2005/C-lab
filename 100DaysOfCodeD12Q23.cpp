/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ?2/day
Next 5 days late: ?4/day
Next 20 days days late: ?6/day
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
 int main()
 {
 	int d,f;
 	printf("enter no of days ");
 	scanf("%d",&d);
 	
 	if(d>5&&d<=10)
 	{
 		
 		f=d*2;
 		
 		printf("fine is %d ",f);
 		
	 }
	 
	 else if(d>10&&d<=20)
	 {
	 	f=d*4;
	 	
	 	printf("fine is %d ",f);
	 }
	 else if(d>20&&d<=30)
	 {
	 	f=d*6;
	 	printf("fine is %d ",f);
	 	
	 }
	 else
	 {
	 	printf(" Membership Cancelled ");
	 }
	
	  
	  return 0;
 }
 

