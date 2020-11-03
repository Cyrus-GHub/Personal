#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    printf("Enter a letter: ");
    scanf("%c", &a);

    if (!isalpha(a))
    {
        printf("\n %c is not a alphabet", a);
    }
    
    
    else if (a = 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U')
    {
        printf("\n %c is a vowel", a);
    }

    
    else
    {
        printf("\n %c is a consonant", a);
    }

    return 0;
}