#include<stdio.h>

int main()
{
	int year;
	printf("Enter a Year\n:");
	scanf("%d",&year);

	if(year % 400 == 0)
	{
		printf("Leap Year\n");
	}

	else if(year % 100 ==0) {
		printf("Not a Leap Year\n");
	}

	else if (year % 4 ==0)
	{
		printf("Leap year");
	}

	else
	{
		printf("Not a leap Year\n");
	}


}
