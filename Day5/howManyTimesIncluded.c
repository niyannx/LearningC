// A program, finding out how many times a word is found into another word.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringCount(char string1[50], char string2[20])
{

    int counter = 0;
    char *tmp = string1;

    while (tmp = strstr(tmp, string2))
    {
        counter++;
        tmp++;
    }
    printf("Found %d times.", counter);
}

int main()
{
    char word1[50];
    char word2[] = "nano";
    printf("Enter string: ");
    gets(word1);

    printf("Searhing for word 'Nano' ");

    stringCount(word1, word2);

    return 0;
}