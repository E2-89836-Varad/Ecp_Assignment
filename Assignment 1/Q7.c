#include<stdio.h>



int main()
{
	int x;
	printf("Enter Four Digit Number\n:");
	scanf("%d",&x);
//	printf("X=%d\n",x);
int a,b,c,d;
int m,n,o,p;
int thousand,hundred,tens,unit;
a=x;	
/*	m=a%10;
	printf("%d\n",m);
	a=a/10;
	n=a%10;
	printf("%d\n",n);
	a=a/10;
	o=a%10;
	printf("%d\n",o);
	a=a/10;
	p=a%10;
	printf("%d\n",p);
*/

	thousand=a/1000;
	printf("%d\n",thousand);
	hundred=(a%1000)/100;
	printf("%d\n",hundred);
	tens=(a%100)/10;
	printf("%d\n",tens);
	unit=a%10;
	printf("%d\n",unit);

	printf("%d = %d + %d + %d + %d\n",a,thousand*1000,hundred*100,tens*10,unit*1);

printf("Reverse:\n");
int x1,x2,x3,x4;
x1=unit*1000;
x2=tens*100;
x3=hundred*10;
x4=thousand*1;

printf("%d\n",x1+x2+x3+x4);


return 0;
}
