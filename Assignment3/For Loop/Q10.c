#include<stdio.h>

int main()
{
int num1=0,num2,i,n;
printf("Enter a number:\n");
scanf("%d",&n);
num1=0;
num2=1;
int next;

printf("%d %d ",0,1);
for(i=0;i<=n-2;i++){
	next=num1+num2;
	printf("%d ",next);
	num1=num2;
	num2=next;
}

	return 0;
}
