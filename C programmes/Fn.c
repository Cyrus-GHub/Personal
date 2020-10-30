#include <stdio.h>

int secondary();
int maths(int Num);

int main()
{
    printf("Hello!\n");  

    secondary(); 

    printf("%d", maths(2));

    return 0;
}


int secondary()
{
    printf("Hello World!\n");

    return 0;
}


int maths(int Num)
{
   return Num*Num*Num;
}
