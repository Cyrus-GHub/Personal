#include <stdio.h>
int main()
{
    int date, month, year;

    printf("\n Enter Date in DD <space> MM <space> YYYY format: \n");
    scanf("%d%d%d", &date, &month, &year);

    if (date <= 31 && month <= 12 && year < 10000)
    {
        printf("\n VALID DATE");
    }

    else
    {
        printf("\n INVALID DATE");
    }

    return 0;
}