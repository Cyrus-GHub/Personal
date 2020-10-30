// Special thanks to Watchfinder & Co.
#include <stdio.h>
int main()
{
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if(year % 4 == 0) // Every 4th year is a 366 days long year to accomodate the error caused by the 365.2422 day long years i.e., a quater of a day
    {
        printf("\n %d is a leap year", year);
    }

    else if(year % 100 == 0)
    {
        printf("\n %d is not a leap year", year); // Every century, the leap year is dropped because it doesn't exctly add up to a quarter of a day
    }

    else if(year % 400 == 0)
    {
        printf("\n %d is a leap year", year); // Every 4th century, the dropped leap year is kept because dropping 4 leap years is overkill
    }

    else
    {
        printf("\n %d is not a leap year", year);
    }
    
}