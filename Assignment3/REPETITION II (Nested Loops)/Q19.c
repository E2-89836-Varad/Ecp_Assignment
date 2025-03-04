#include<stdio.h>

int main()
{
	int start,end;
	printf("Enter a starting and ending ragge of tables\n");
	scanf("%d%d",&start,&end);

		for(int j=start;j<=end;j++)
		{
		printf("\n");			
		for(int i=1;i<=10;i++)
		{
			printf("%10d\n",j*i);
		}
	printf("\n");
		}

return 0;
}
