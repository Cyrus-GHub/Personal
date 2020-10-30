#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;

    printf("Enter a letter: ");
    scanf("%c", &a);

    if (isalpha(a) && islower(a))
    {
        a = toupper(a);
        printf("Uppercase of entered letter is %c", a);
    }

    else
    {
        printf("The entered letter is already uppercase");
    }
}