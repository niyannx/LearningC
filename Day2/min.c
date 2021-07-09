// A program, finding the smallest number in an integer array.

#include <stdio.h>

int main()
{
    int size = 5;
    int array[size], *minimum, i;

    printf("Enter %d integers: \n", size);

    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    minimum = array;
    *minimum = *array;

    for (i = 1; i < size; i++)
    {
        if (*(array + i) < *minimum)
        {
            *minimum = *(array + i);
        }
    }

    printf("Minimum element's value is %d.\n", *minimum);
    return 0;
}