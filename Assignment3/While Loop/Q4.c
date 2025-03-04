#include<stdio.h>

int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);

int fact=1;
int bkp=num;
while(num!=0)
{
fact=fact*num;
num--;
}
printf("Factroal of %d is %d",bkp,fact);
	return 0;
}
