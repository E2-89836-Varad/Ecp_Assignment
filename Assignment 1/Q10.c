#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,Area;
printf("Enter the Length of Triangle:\n");
scanf("%d",&a);
printf("Enter the Breadth of Triangle:\n");
scanf("%d",&b);
printf("Enter the Height of Triangle:\n");
scanf("%d",&c);

int parameter=a+b+(c*a)+b+c;
printf("Parameter of Triangle=%d\n",parameter);

int s=(a+b+c)/2;

Area=sqrt((s*(s-a)*(s-b)*(s-c)));
printf("Area of Triangle=%d\n",Area);

return 0;

}
