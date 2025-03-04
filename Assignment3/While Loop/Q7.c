#include<stdio.h>

int main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
int temp=num;
int i=1;
while(temp % i==0 && num>i)
{
printf("%d X %d=%d\n",num,i,num*i);
i++;
num=temp/i;
}

	return 0;
}



/*
int main()
{
int num;
//int temp=num;
  printf("Enter a number:\n");
   scanf("%d",&num);
   int temp=num;

   for(int i=1;i<=num;i++)
   {
	   if(temp %i ==0 && num>i )
	   {
		   num=temp/i;
		   printf("%d X %d=%d\n",num,i,num*i);
		   
	   }
   }


}*/
