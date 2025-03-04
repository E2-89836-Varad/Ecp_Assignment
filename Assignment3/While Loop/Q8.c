#include<stdio.h>

int main()
{
int num,temp;
printf("Enter a numbern:");
scanf("%d",&num);
int i=2;
printf("%d=",num);
while(num !=1)
{
if(num % i==0)	
{
	printf("%d *",i);
	num=num/i;
}
else
{
i++;
}
//i++;
}

printf("\b");
	return 0;
}
