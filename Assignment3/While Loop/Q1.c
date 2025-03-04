#include<stdio.h>

int main()
{
int number;
char c;
printf("Enter a number to print character in multiples of it\n");
scanf("%d",&number);
printf("Enter a character to print:\n");
scanf("%*c%c",&c);

int i;

while(i<=number)
{
printf("%c ",c);
i++;
}

	return 0;
}
