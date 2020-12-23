#include <stdio.h>
int main()
{
    int code, plan = 250, calls;
    float charge, total;

    printf("\n Please enter your 3-digit Customer Code: ");
    scanf("%d", &code);

    printf("\n Enter number of calls: ");
    scanf("%d", &calls);

    if (calls > 100)
    {
        printf("\nYour Bill: \n");
        printf("\nCustomer Code: %d", code);
        printf("\n Mobile Service: Rs %d", plan);
        charge = 1.25 * (calls - 100);
        printf("\n Call Cost: Rs %.2f", charge);
        total = plan + charge;
        printf("\n");
        printf("\n TOTAL: Rs %.2f", total);
        printf("\n------------------------------\n");
    }

    else
    {
        printf("\nYour Bill: \n");
        printf("\nCustomer Code: %d", code);
        printf("\n Mobile Service: Rs %d", plan);
        charge = 0;
        printf("\n Call Cost: Rs %.2f", charge);
        total = plan + charge;
        printf("\n");
        printf("\n TOTAL: Rs %.2f", total);
        printf("\n------------------------------\n");
    }

    return 0;
}