/* A program, which links the contents of two char arrays.
 e.g., "he" + "llo" = "hello". */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringLinking(char string1[20], char string2[20])
{
    char result[50];

    strcpy(result, string1);
    strcat(result, string2);

    printf("%s", result);
}

int main()
{
    char word1[50];
    char word2[20];
    printf("Enter first string: ");
    gets(word1);

    printf("Enter second string: ");
    gets(word2);

    stringLinking(word1, word2);

    return 0;
}