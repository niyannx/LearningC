// A program, checking if an entered number is a digit

#include <stdio.h>

void check(char ch)
{

    if (ch >= '0' && ch <= '9')
    {
        printf("\n%c is a decimal digit", ch);
    }
    else
    {
        printf("\n%c is not a decimal digit", ch);
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