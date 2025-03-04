#include<stdio.h>

int main()
{
	enum MENU{EXIT,ADDITION,SUBSTRACT,MULTIPLY,DIVISION,MODULUS};

	typedef enum MENU M;
	M choice,num1,num2;

	do{
		printf("0.EXIT\n");
		printf("1.ADDITION\n");
		printf("2.SUBTRACTION\n");
		printf("3.MULTIPLYCATION\n");
		printf("4.DIVISION\n");
		printf("5.MODULOUS\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case EXIT:
				printf("Thanks for using our calculator..\n");
				break;

			case ADDITION:
				printf("Enter 2 Numbers:\n");
				scanf("%d%d",&num1,&num2);
				printf("ADDITION of %d and %d is %d\n",num1,num2,num1+num2);
				break;

			case SUBSTRACT:
				printf("Enter 2 Numbers:\n");
				scanf("%d%d",&num1,&num2);
				printf("Substraction of %d and %d is %d\n",num1,num2,num1-num2);
				break;

			case MULTIPLY:
				printf("Enter 2 Numbers:\n");
				scanf("%d%d",&num1,&num2);
				printf("MULTIPLYCATION of %d and %d is %d\n",num1,num2,num1*num2);
				break;

			case DIVISION:
				printf("Enter 2 Numbers:\n");
				scanf("%d%d",&num1,&num2);
				if(num2==0)
					printf("NOT POSSIBLE..!\n DIVIDE BY ZERO ERROR\n");
				else{
					printf("DIVISION of %d and %d is %d\n",num1,num2,num1/num2);}
				break;

			case MODULUS:
				printf("Enter 2 Numbers:\n");
				scanf("%d%d",&num1,&num2);
				if(num2==0)
				{
					printf("NOT POSSIBLE..!\nDIVIDE BY ZERO ERROR\n");
				}
				else{
				printf("Remainder of %d and %d is %d\n",num1,num2,num1%num2);
				}
				break;
		}


	}while(choice !=0);


	return 0;
}
