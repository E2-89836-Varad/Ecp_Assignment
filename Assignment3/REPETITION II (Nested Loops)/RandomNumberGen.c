#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, ngusses = 1;

    srand(time(0));
    number = rand() % 100 + 1;
//    printf("The number is %d\n", number);
	printf("Guess the number between 1 to 100\n");
    do
    {
        
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Higher Number Please\n");
        }
        else if (guess > number)
        {
            printf("Lower Number Please\n");
        }
        else
        {
            printf("You have gussed number in %d attempt\n", ngusses);
        }
        ngusses++;
    } while (guess != number);

    return 0;
}