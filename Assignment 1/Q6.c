#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number to print its number:\n");
	scanf("%d",&num);

/*	for(int i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",num,i,num*i);
	}*/

     
	printf("%d X %d=%d\n",num,1,num*1);
	printf("%d X %d=%d\n",num,2,num*2);
	printf("%d X %d=%d\n",num,3,num*3);
	printf("%d X %d=%d\n",num,4,num*4);
	printf("%d X %d=%d\n",num,5,num*5);
	printf("%d X %d=%d\n",num,6,num*6);
	printf("%d X %d=%d\n",num,7,num*7);
	printf("%d X %d=%d\n",num,8,num*8);
	printf("%d X %d=%d\n",num,9,num*9);
	printf("%d X %d=%d\n",num,10,num*10);
	return 0;
}
