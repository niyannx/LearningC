// A program, which checks whether an entered character is an Uppercase or a Lowercase Latin letter.

#include <stdio.h>

void check(char ch)
{

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\n%c is an UpperCase character", ch);
    }
    else
    {
        printf("\n%c is not a LowerCase character", ch);
    }
}

int main()
{
    char ch;

    printf("Enter a charcter");
    scanf("%c", &ch);

    check(ch);

    return 0;
}