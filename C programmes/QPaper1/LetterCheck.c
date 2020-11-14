#include <stdio.h>
#include <ctype.h>
int main()
{
    char alpha;

    printf("Enter a letter: ");
    scanf("%c", &alpha);

    if (!isalpha(alpha))
    {
        printf("\n %c is not a alphabet", alpha);
    }

    else if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
        printf("\n %c is a vowel", alpha);
    }

    else
    {
        printf("\n %c is a consonant", alpha);
    }

    return 0;
}