
#include<stdio.h>

	int main()
	{
		char c;
		printf("Enter a Character\n");
		scanf("%c",&c);
		printf("Decimal :%d\n",c)	;
		printf("Hex :%x\n",c);
		printf("Octal :%o\n",c);
		printf("Char :%c\n",c);

		int ascii;
		printf("Enter any ASCII value\n:");
		scanf("%d",&ascii);
		printf("Character of Entered ASCII Value:%c\n");
		return 0;
	}
