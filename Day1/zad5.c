/* A program, finding out if an entered number is a degree of the number 2. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d", &num);

    if (num > 0)
    {
        while (num % 2 == 0)
        {
            num /= 2;
        }
        if (num == 1)
        {
            printf("Yes, it is.");
        }
    }

    if (num == 0 || num != 1)
    {
        printf("No, it isn't.");
    }
    return 0;
}
