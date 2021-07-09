// A program, which upon entering a char array, calculates it's length.

#include <stdio.h>
#include <string.h>

void stringLength(char word[20])
{
    printf("Length: %zu \n", strlen(word));
}

int main()
{
    char word[20];
    printf("Enter string: ");
    gets(word);

    stringLength(word);

    return 0;
}