#include<stdio.h>

int main()
{
int num,fact=1;
printf("Enter a number:\n");
scanf("%d",&num);

for(int i=num;i>=1;i--)
	fact=fact*i;
	printf("Factroal of %d is %d\n",num,fact);
	return 0;
}
