#include<stdio.h>

int main()
{
	int year;
	int month;
	printf("Enter a Year\n:");
	scanf("%d",&year);

	printf("Enter a Month\n:");
	scanf("%d",&month);

	switch(month)
	{
		case 1:printf("JAN->31 days\n");
			   break;		
		case 2:

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

			   break;		
		case 3:
			   printf("MAR=31");

			   break;		

		case 4:
			   printf("APR=30");

			   break;		
		case 5:
			   printf("MAY=31");

			   break;		
		case 6:
			   printf("JUN=30");
			   break;		
		case 7:
			   printf("JUL=31");
			   break;		

		case 8:
			   printf("AUG=31");
			   break;		

		case 9:
			   printf("SEP=30");
			   break;		

		case 10:
			   printf("OCT=31");
			   break;		

		case 11:
			   printf("NOV=30");
			   break;		

		case 12:
			   printf("DEC=31");
			   break;		
	}
}
