// A program, finding whether a char is found inside another char.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringSearch(char string1[50], char string2[20])
{

    if (strstr(string1, string2) != NULL)
    {
        printf("Found. \n");
    }
    else
    {
        printf("Not found. \n");
    }
}

int main()
{
    char word1[50];
    char word2[] = "nano";
    printf("Enter string: ");
    gets(word1);

    printf("Searching for word %s. ", word2);
    stringSearch(word1, word2);

    return 0;
}