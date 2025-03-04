#include<stdio.h>

int main()
{
int num;
printf("Enter a number:\n");

scanf("%d",&num);

int i=1;
while(i<=10)
{
printf("%d X %d = %d\n",num,i,num*i);
i++;
}

	return 0;
}
