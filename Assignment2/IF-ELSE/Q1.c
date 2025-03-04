#include<stdio.h>
int main()
{
int a,b,div;
printf("Enter First number:\n");
scanf("%d",&a);
printf("Enter Second number:\n");
scanf("%d",&b);
if(b>0)
{
	div=a/b;
	printf("Division of %d / %d = %d\n",a,b,div);
}
else{
printf("Divide by 0 Error");
}
}
