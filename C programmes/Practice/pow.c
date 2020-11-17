#include <stdio.h>

long long power(int num, int pow);

int main()
{
    printf("%u", power(1, 1));
    return 0;
}

long long power(int num, int pow)
{
    printf("Enter number <space> power: ");
    scanf("%d %d", &num, &pow);

    int result = 1;
    for (int i = 0; i < pow; i++)
    {
        result *= num;
    }

    return result;
}