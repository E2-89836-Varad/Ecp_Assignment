#include<stdio.h>

int main()
{
	int year;
	printf("Enter a Year\n:");
	scanf("%d",&year);

	if((year % 4 == 0 && year % 100!=0) || year % 400 ==0 )
	{
		printf("Leap Year\n");
	}

	
	else
	{
		printf("Not a leap Year\n");
	}


}
