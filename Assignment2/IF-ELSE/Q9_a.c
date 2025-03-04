#include<stdio.h>

int main()
{
	int year;
	int month;
	printf("Enter a Year\n:");
	scanf("%d",&year);

	printf("Enter a Month\n:");
	scanf("%d",&month);

	if(month==1)
	{
		printf("JAN->31 days\n");
	}
	else if(month==2)
	{
	if((year % 4 == 0 && year % 100!=0) || year % 400 ==0 )
      {
          printf("FEB-> 29 Days\n");
      }
	  else
      {
          printf("FEB-> 28 Days\n");
      }

	}

	else if(month==3)
	{
	printf("MAR=31");
	}

	else if(month==4)
	{
	printf("APR=30");
	}


	else if(month==4)
	{
	printf("MAY=31");
	}

	else if(month==5)
	{
	printf("JUNE=30");
	}

	else if(month==6)
	{
	printf("JUL=31");
	}

	else if(month==7)
	{
	printf("AUG=31");
	}

	else if(month==8)
	{
	printf("SEP=30");
	}

	else if(month==10)
	{
	printf("OCT=31");
	}

	else if(month==11)
	{
	printf("NOV=30");
	}

	else if(month==12)
	{
	printf("DEC=31");
	}

}
