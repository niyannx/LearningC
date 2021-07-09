// A program, which converts a char array into an integer.

#include <stdio.h>
#include <string.h>
#include <math.h>

int charArrayToInt(char *arr)
{
    int i, value, r, flag;

    flag = 1;
    i = value = 0;

    for (i = 0; i < strlen(arr); ++i)
    {

        if (i == 0 && arr[i] == '-')
        { // if negative number
            flag = -1;
            continue;
        }

        r = arr[i] - '0';
        value = value * 10 + r;
    }

    value = value * flag;

    return value;
}

int main()
{
    char arr[100];
    printf("Enter String: ");
    scanf("%s", arr);
    int ans = charArrayToInt(arr);
    printf("\nInteger: %d", ans);
    return 0;
}