#include <stdio.h>
#include <math.h>
int main()
{
    int n, num, sum = 0, ans = 0;
    printf("enter any number: ");
    scanf("%d", &n);
    num = n;
    int answer = n;
    while (n > 0)
    {
        n = n / 10;
        sum++;
    }
    while (num > 0)
    {
        ans += pow(num % 10, sum);
        num = num / 10;
    }
    if (answer == ans)
    {
        printf("it is armstrong number");
    }
    else
    {
        printf("it is not an armstrong number");
    }
    return 0;
}