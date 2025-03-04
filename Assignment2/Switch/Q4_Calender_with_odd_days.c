#include <stdio.h>

int main()
{
    int date;
    int year;
    int month;
    int odd;
    int odd1;
    int odd2;
    int Feb;
    int final_odd;

    printf("Enter Date:");
    scanf("%d", &date);
    printf("Enter Year:");
    scanf("%d", &year);

    // int date_odd=date/7;

    int Jan = 3;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        Feb = 1;
    }
    else
    {
        Feb = 0;
    }
    // int  Feb = 1;
    int Mar = 3;
    int Apr = 2;
    int May = 3;
    int Jun = 2;
    int Jul = 3;
    int Aug = 3;
    int Sep = 2;
    int Oct = 3;
    int Nov = 2;
    int Dec = 3;

    if (year > 2000)
    {
        year = year - 1;
        int a = year - 2000;
        int leap = a / 4;
        int normal = a - leap;
        int b = leap * 2;
        odd = normal + b;
        odd = odd % 7;
        odd1 = odd;
        // printf("odd1=%d\n", odd1);
    }

    printf("Enter choice of month\n");
    printf("1:Jan\n");
    printf("2:Feb\n");
    printf("3:Mar\n");
    printf("4:Apr\n");
    printf("5:May\n");
    printf("6:Jun\n");
    printf("7:Jul\n");
    printf("8:Aug\n");
    printf("9:Sep\n");
    printf("10:Oct\n");
    printf("11:Nov\n");
    printf("12:Dec\n");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        odd2 = odd1;
        break;

    case 2:
        odd2 = Jan + odd1;
        break;

    case 3:
        odd2 = Jan + Feb + odd1;
        break;

    case 4:
        odd2 = Jan + Feb + Mar + odd1;
        break;

    case 5:
        odd2 = Jan + Feb + Mar + Apr + odd1;
        break;

    case 6:
        odd2 = Jan + Feb + Mar + Apr + May + odd1;
        break;

    case 7:
        odd2 = Jan + Feb + Mar + Apr + May + Jun + odd1;
        break;

    case 8:
        odd2 = Jan + Feb + Mar + Apr + May + Jun + Jul + odd1;
        break;

    case 9:
        odd2 = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + odd1;
        break;

    case 10:
        odd2 = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + odd1;
        break;

    case 11:
        odd2 = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + odd1;
        break;

    case 12:
        odd2 = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + Nov + odd1;
        break;

    default:
        printf("Invalid Input");
    }

    int odd3 = odd2 + date;
    final_odd = odd3 % 7;
    // printf("odd2=%d\n", odd2);
    // printf("odd3=%d\n", odd3);
    // printf("final odd=%d\n", final_odd);
    // printf("final date =%d\n", date);

    switch (final_odd)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 0:
        printf("Sunday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        break;
    }

    return 0;
}