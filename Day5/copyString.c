// A program, copying the contents of one char array and pasting them into another.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringCopy(char word[20])
{

    char word2[20];
    strcpy(word2, word);
    printf("Word 1: %s \n", word);
    printf("Word 2: %s \n", word2);
}

int main()
{
    char word[20];
    printf("Enter string: ");
    gets(word);

    stringCopy(word);

    return 0;
}