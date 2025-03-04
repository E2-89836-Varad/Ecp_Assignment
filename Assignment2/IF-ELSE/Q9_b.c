#include<stdio.h>

int main()
{
	int year,month;
	printf("Enter month and year\n");
	scanf("%d%d",&month,&year);

	if(month==1 || month==3|| month==5 || month==7 || month==8 || month==10 || month==12)
		printf("31 days");

	if(month==2 || month==4|| month==6 || month==9 || month==11)
	{
		if((year % 4==0) && (year % 100 !=0) || year % 400==0)
          printf("29  days");
		
		else
		printf("30 days");
	}
}
