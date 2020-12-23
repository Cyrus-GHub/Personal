// Prints number of uppercase, lowercase alphabets and invalid characters entered by user

#include <stdio.h>
#include <ctype.h>

int i, n;

void count(char *in)
{
    int lower = 0, upper = 0, invalid = 0;

    for (i = 0; i < n; i++)
    {
        char c = *(in + i);

        if (isalpha(c) && islower(c))
            lower++;

        else if (isalpha(c) && isupper(c))
            upper++;

        else
            invalid++;
    }

    printf("\n Number of lowercase alphabets: %d", lower);
    printf("\n Number of uppercase alphabets: %d", upper);
    printf("\n Number of invalid characters: %d", invalid);
}

int main()
{
    printf("\n How many characters do you want to enter?\n");
    scanf("%d", &n);
    getchar();

    char inputs[n];
    char *p = inputs;

    for (i = 0; i < n; i++)
    {
        printf("\n Enter character: ");
        scanf("%c", &*(p + i));
        getchar();
    }

    count(p);

    return 0;
}