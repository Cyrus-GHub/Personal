#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;

    printf("Enter a letter: ");
    scanf("%c", &a);

    if (isalpha(a) && isupper(a))
    {
        a = tolower(a);
        printf("Lowercase of entered letter is %c", a);
    }

    else
    {
        printf("Entered letter is already lowercase");
    }

    return 0;
}