#include<stdio.h>

	int main()
	{
	float c,f;
	printf("Enter the temperature in Celsius:\n");
	scanf("%f",&c);
//	printf("F=%f\n",f);
	f=(c*(9/5.0))+32.0;
	printf("Temperature in Celsius %f ",f);
	}
