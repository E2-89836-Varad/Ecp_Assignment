#include<stdio.h>

int main()
{
	int num1,num2,num3;
	printf("Enter First number:\n");
	scanf("%d",&num1);
	printf("Enter Second number:\n");
	scanf("%d",&num2);
	printf("Enter Second number:\n");
	scanf("%d",&num3);

	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("%d is a Gratest number\t",num1);
		}
		else
		{
			printf("%d is a Gratest number\t",num3);
		}
	}
	else if(num2>num1)
	{
		if(num2>num3)
		{
			printf("%d is a Gratest number\t",num2);
		}
		else
		{
			printf("%d is a Greatest number\t",num3);
		}
	}
	else
	{
	printf("%d is a Gratest number\t",num3);
	}
}
