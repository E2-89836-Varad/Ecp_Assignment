#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);

	if(num>0)
	printf("%d is Positive Number\n",num);
	else if(num<0)
		printf("%d is Negative Number\n",num);
	else
		printf("Enter number is Zero\n");
}
