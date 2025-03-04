#include<stdio.h>

int main()
{
	char c;
	printf("Enter a character:\n");
	scanf("%c",&c);

	if( c>='A' && c<='Z' || c>='a' && c<='z')
	{
		if( c>='A' && c<='Z')
		{
			printf("%c is Upper case Character\n",c);
		}
		else
		{
			printf("%c is Lower case Character\n",c);	
		}
	}

	else if( c>='0' && c<='9')
	{
		printf("%c is Numerical Digits\n",c);
	}

    else if( c==' ')
	{
		printf("%c is Space Key\n",c);
	}

	else if( c=='\t')
	{
		printf("%c is Tab Key\n",c);
	}


	else if( c=='\r')
	{
		printf("%c is Carriage Return\n",c);
	}

	else if( c=='\n')
	{
		printf("%c is next line\n",c);
	}

	else
	{
		printf("%c is Other Special Symbol",c);
	}



	return 0;
}
