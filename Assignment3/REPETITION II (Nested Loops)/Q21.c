#include<stdio.h>

int main()
{
	//	int flag=0;

	int num,check=0;
	printf("Enter a number:\n");
	scanf("%d",&num);

	for(int i=num+1; ;i++)
	{
		int flag=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0){
				//	printf("i=%d");
				flag=1;
				break;}
		}


//				printf("i=%d ",i);

		if(flag==0 && check <5)
		{	printf("%d ",i);
			check++;
			if(check==5){break;}
		}
//			if(check<=5)
//			{
//				break;
//			}
	}

	return 0;
}
