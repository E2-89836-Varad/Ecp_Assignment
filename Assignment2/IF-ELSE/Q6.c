#include<stdio.h>

int main()
{
	int num;
	printf("Enter a 5 digit number\n");
	scanf("%d",&num);
	int a=num;
	int lacks,thousand,hundred,tens,unit;
	lacks=a/10000;
	thousand=(a%10000)/1000;
	hundred=(a%1000)/100;
	tens=(a%100)/10;
	unit=a%10;
	printf("%d %d %d %d %d\n",lacks,thousand,hundred,tens,unit);

	if(lacks == unit && thousand == tens)
	{
		printf("Entered number is Palindrome\n");
	}
	
	else{

		printf("Entered number is not Palindrome\n");
	}

	return 0;
}
