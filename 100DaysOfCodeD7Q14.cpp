//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

 main()
{
	char a ;
	printf("enter character");
	scanf("%c",&a);
	
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
	return 0;
}
