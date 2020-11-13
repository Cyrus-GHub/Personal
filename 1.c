#include <stdio.h>
int main()
{
    int x = 5, y = 7, z = 7;
    x += y == z;
    printf("%d", x);
    return 0;
}