#include<stdio.h>

int main()
{
	int num1,num2;
	printf("Enter 2 Numbers:\n");
	//scanf("%d%d",&num1,&num2);
	scanf("%d",&num1);
	scanf("%d",&num2);
	int result=1;
	int temp;
	//while(num1%num2!=0)

	//result=num1%num2;
	if(num2>num1)
	{
		while(result != 0)
		{
			result=num2 % num1;
			temp=result;
			result=num1 % temp;
		}
	}
	//else
	//	result=num1 % num2;


	printf("Result=%d",temp);

	return 0;
}
