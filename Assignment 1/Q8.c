#include<stdio.h>

	int main()
	{
		int x,y,z;
		printf("Enter Three Numbers:\n");
		scanf("%d%d%d",&x,&y,&z);
		printf("Average=");
		int avg=(x+y+z)/3;
		printf("%d",avg);
		return 0;
	}

