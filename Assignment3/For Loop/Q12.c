#include<stdio.h>

int main()
{
int base,power;
printf("Enter a Base and Power\n");
scanf("%d %d",&base,&power);
int temp=1;
for(int i=power;i>=1;i--)
	temp=temp*base;
	printf("Base=%d Power=%d Answer=%d\n",base,power,temp);

	return 0;
}
