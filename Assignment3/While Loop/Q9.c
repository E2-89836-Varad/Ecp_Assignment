#include<stdio.h>

int main()
{
int num1,num2,rem;
printf("Enter 2 number\n");
scanf("%d%d",&num1,&num2);
int n1=num1,n2=num2;

while(num1%num2 !=0)
{
rem=num1%num2;
printf("%d %% %d= %d\n",num1,num2,rem);
num1=num2;
num2=rem;
}
printf("GCD of %d and %d is %d\n",n1,n2,rem);
	return 0;
}
