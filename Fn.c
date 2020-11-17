#include <stdio.h>

int cube(int i);
int main()
{
    printf("%d", cube(2));
    return 0;
}

int cube(int i)
{
    int f;
    f = i * i * i;
    return f;
}