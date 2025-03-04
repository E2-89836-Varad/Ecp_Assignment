#include<stdio.h>

int main()
{

	int row=5;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=row-i;j++)
		{
			printf("  ");	
		}

		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}

		printf("\n");

	}


	return 0;
}

/*
#include<stdio.h>

int main()
{
int rows = 5; // Number of rows in the pyramid

for (int i = 1; i <= rows; i++) // Outer loop for rows
{
// Print leading spaces
for (int j = 1; j <= rows - i; j++)
{
printf("  "); // Two spaces for alignment
}

// Print asterisks
for (int k = 1; k <= i; k++)
{
printf("* ");
}

// Move to the next line
printf("\n");
}

return 0;
}*/








