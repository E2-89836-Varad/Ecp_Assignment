#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number\n");
		scanf("%d",&num);

		for(int j=1;j<=num;j++)
		{
		for(int i=1;i<=num;i++)
		{
			printf(" * ");
		}
		printf("\n");
		}

return 0;
}
