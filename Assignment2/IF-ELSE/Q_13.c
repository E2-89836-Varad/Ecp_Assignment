#include<stdio.h>

int main()
{
int real,img;

printf("enter real value\n");
scanf("%d",&real);

printf("enter img value\n");
scanf("%d",&img);

if(real>0 && img >0)
{
	printf("Point lies in first quadrant..!\n");
}
else if(real>0 && img <0)
	printf("Point lies in second quadrant..!\n");
else if(real<0 && img <0)
	printf("Points lies in third quadrant..!\n");
	else if(real==0 && img==0)
	printf("Points lies on origin..!\n");

else  
	printf("Points lies in fourth quadrant..!\n");
	

	return 0;
}
