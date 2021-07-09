// A program, comparing two char arrays to one another.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringCompare(char word1[20], char word2[20])
{

    if (strcmp(word1, word2) == 0)
    {
        printf("Equal. \n");
    }
    else
    {
        printf("Not equal. \n");
    }
}

int main()
{
    char word1[20];
    char word2[20];
    printf("Enter first string: ");
    gets(word1);

    printf("Enter second string: ");
    gets(word2);

    stringCompare(word1, word2);

    return 0;
}