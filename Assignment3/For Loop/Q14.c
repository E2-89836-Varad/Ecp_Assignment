#include<stdio.h>

int main()
{
int num;
int flag=0;
scanf("%d",&num);
int i;
for(i=2;i<num;i++)
{
	if(num % i ==0 )
	{	flag=1;
	break;}

//		printf("num=%d\n");
}

	printf("i=%d\n",i);	

	if(flag =1)
	printf("%d is not a prime number\n",num);

	

	else
	printf("%d is a prime nubeer",num);
	return 0;
}
