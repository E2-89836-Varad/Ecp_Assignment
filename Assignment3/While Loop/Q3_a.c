#include<stdio.h>

int main()
{
int num,rem,sum,rev=0;
printf("Enter a number:\n");
scanf("%d",&num);
int count;
int temp=num;
int bkp=num;
sum=0;
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
count++;
}
printf("Sum of number is %d\n",sum);

 while(temp != 0)
  {
  rem=temp%10;
  rev=(rev*10)+rem;
  temp=temp/10;
  }
 printf("Reverse  of number is %d\n",rev);

if(bkp==rev)
	printf("Entered number is Palindrome\n");
	else
	printf("Entered number is not an Palindrome\n");

	int pal;

int bkp1=bkp;
int ans;

while(bkp !=0)
{
	rem=bkp%10;
	int power=1;
	for(int i=0;i<count;i++)
	{
	power=power*rem;
	}
	ans=ans+power;
	bkp=bkp/10;
}

if(bkp1==ans)
	printf("It is an armstromg number\n");
	else
	printf("It is not an armstromg number\n");


	return 0;
}
