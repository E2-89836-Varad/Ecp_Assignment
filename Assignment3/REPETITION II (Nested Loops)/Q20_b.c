#include<stdio.h>

int main()
{
	int i, num,rem,temp,count=0,ast=0,power=1;
//i=153;
//temp=i;
	for(int i=1;i<=500;i++){
		temp=i;
		count=0;
		ast=0;
		while(temp != 0)
		{
	//		rem=temp%10;
			count++;
			temp=temp/10;
//			printf("i=%d\n",i);
		}
//	printf("count=%d\n",count);

	temp=i;

	while(temp !=0)
		{
			power=1;
			rem=temp%10;
			for(int j=0;j<count;j++)
			{
			power=power*rem;
			}
			ast=ast+power;
//			printf(" %d ",i);
			temp=temp/10;
		}
//		printf("%d\n",ast);
		
		if(i==ast && count > 1)
			printf("%d is an Armstrong number\n",i);
	}




	return 0;
}
