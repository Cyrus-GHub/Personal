#include <stdio.h>

long long power(int num, int pow);

int main()
{
    printf("%u", power(2, 3));
    return 0;
}

long long power(int num, int pow)
{
    int result = 1;
    for (int i = 0; i < pow; i++)
    {
        result = result * num;
    }

    return result;
}