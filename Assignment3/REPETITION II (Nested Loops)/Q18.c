#include<stdio.h>

int main()
{
	int num=10;
	

		for(int j=1;j<=num;j++)
		{
		for(int i=1;i<=num;i++)
		{
			printf("%10d",j*i);
		}
		printf("\n");
		}

return 0;
}
