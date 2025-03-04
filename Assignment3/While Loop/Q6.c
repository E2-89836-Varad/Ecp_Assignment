#include<stdio.h>

int main()
{
int num,i=1,temp;

printf("Enter a number:\n");
scanf("%d",&num);
temp=num;

while(temp !=0)
{
	if(num%i==0 &&  temp != num)
		printf("%d ",num/i);
	i++;
	temp--;
}

	return 0;
}
