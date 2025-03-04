#include<stdio.h>

int main()
{
	int num1,num2;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&num1,&num2);
	char op;
	printf("Enter operato\n");
	scanf("%*c%c",&op);

	switch(op)
	{
		case '+':
	 printf("%d + %d = %d\n",num1,num2,num1+num2);
	 break;
		case '-':
	 printf("%d + %d = %d\n",num1,num2,num1-num2);
	 break;
		case '*':
	 printf("%d + %d = %d\n",num1,num2,num1*num2);
	 break;
		case '/':
	 if(num2==0)
		 printf("Divide by ZERO Error...!!!\n");
	 else
		 printf("%d + %d = %d\n",num1,num2,num1/num2);
	 break;
	}
	return 0;
}
