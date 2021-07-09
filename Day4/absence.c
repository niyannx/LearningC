/*
A menu-type program, which handles the presences and absences of 32 studensts BY USING BITWISE OPERATIONS.
*** ADD OPTIONS : 
- Display the number of students, who are absent.
- Display the number of students, who are present.
- Change the status of a student - e.g., ABSENT to PRESENT, and vise versa.
- Data validation - e.g., INVALID OPTION, INVALID STUDENT NUMBER, ect...
*/

#include <stdio.h>
#include <stdlib.h>

void setBit(int *mask, int n)
{
    *mask |= (1 << n);
}

void eraseBit(int *mask, int n)
{
    *mask &= ~(1 << n);
}

int isSet(int mask, int n)
{
    return mask & (1 << n);
}

int onesCount(int mask)
{
    int count = 0;
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        if (isSet(mask, i))
        {
            count++;
        }
    }
    return count;
}

int zerosCount(int mask)
{
    return sizeof(int) * 8 - onesCount(mask);
}

void IsHere(int mask)
{
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        if (isSet(mask, i))
        {
            printf("\nStudent %d is here\n", i);
        }
        else
        {
            printf("\nStudent %d is not here\n", i);
        }
    }
}

int IsNotHere(int mask, int n)
{
    return isSet(mask, n) ? 0 : 1;
}

int Validation(int n)
{
    return n > 32 || n < 0 ? 0 : 1;
}

int main()
{
    int prisustviq = 0;
    int option;
    while (1)
    {
        printf("\n1. Write a presence\n");
        printf("2. Write an absence\n");
        printf("3. Information\n");
        printf("4. Change status by number\n");
        printf("5. Exit\n");

        printf("Enter option: ");
        scanf("%d", &option);

        if (option == 1)
        {
            int n;
            printf("Student number: ");
            scanf("%d", &n);
            if (Validation(n))
            {
                setBit(&prisustviq, n);
            }
            else
            {
                printf("Invalid number\n");
            }
        }
        else if (option == 2)
        {
            int n;
            printf("Student number: ");
            scanf("%d", &n);

            if (Validation(n))
            {
                eraseBit(&prisustviq, n);
            }
            else
            {
                printf("Invalid number\n");
            }
        }
        else if (option == 3)
        {
            printf("Number of attendees: %d\n", onesCount(prisustviq));
            printf("Number of absentees: %d\n", zerosCount(prisustviq));
            IsHere(prisustviq);
        }
        else if (option == 4)
        {
            int n;
            printf("Student number: ");
            scanf("%d", &n);

            if (Validation(n))
            {
                if (IsNotHere(prisustviq, n))
                {
                    printf("Student %d is here\n", n);
                }
                else
                {
                    printf("Student %d is not here\n", n);
                }
            }
            else
            {
                printf("Invalid number\n");
            }
        }
        else if (option == 5)
        {
            break;
        }
        else
        {
            printf("Invalid command \n");
        }
    }
    return 0;
}