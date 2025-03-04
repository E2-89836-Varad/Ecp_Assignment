#include<stdio.h>

int main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
if(num % 1==0 && num % num ==0)
	printf("%d is prime number\n",num);
else
	printf("Entered number is not a prime number\n");

	return 0;
}
