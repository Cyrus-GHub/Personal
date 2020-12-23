#include <stdio.h>

typedef struct purchase
{
    char name[20];
    int code;
    float price;
} ph;

int main()
{
    int n, i;
    printf("enter the number of purchase you want to store: \n");
    scanf("%d", &n);
    ph a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the name, code, price for %dst purchase :: \n");
        scanf("%s%d%f", &a[i].name, &a[i].code, &a[i].price);
    }
    printf("NAME          CODE          PRICE\n");
    for (i = 0; i < n; i++)
    {
        printf("%s          %d          %.2f\n", a[i].name, a[i].code, a[i].price);
    }
    return 0;
}