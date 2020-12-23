#include <stdio.h>
#include <time.h>

int main()
{
    time_t a;
    time(&a);

    printf("Current Date & Time: %s", ctime(&a));
    return 0;
}