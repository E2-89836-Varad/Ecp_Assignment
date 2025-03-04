#include<stdio.h>

int main()
{
	
	float c,f;
	printf("Enter the temperature in Fahrenheit:\n");
	scanf("%f",&f);
//	printf("F=%f\n",f);
	c=((5/9.0)*(f-32));
	printf("Temperature in Celsius %f ",c);



	return 0;
}
