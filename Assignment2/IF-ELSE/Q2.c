#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number\n:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Enter number %d is Even number\n",num);
	}
	else
	{
		printf("Enter number %d is odd number",num);
	}

	return 0;
}
