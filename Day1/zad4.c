/* A program finding out whether 3 n centimeter sides make a triangle, and if so, calculate the perimeter, the area and
 what type of triangle it is. */

#include <stdio.h>
#include <math.h>

int main()
{
    float sideA, sideB, sideC;

    printf("Enter side a: ");
    scanf("%f", &sideA);
    printf("Enter side b: ");
    scanf("%f", &sideB);
    printf("Enter side c: ");
    scanf("%f", &sideC);

    float perimeter = sideA + sideB + sideC;
    float area = perimeter / 2;

    if (sideA < sideB + sideC && sideB < sideA + sideC && sideC < sideA + sideB)
    {
        printf("These sides DO make a triangle.\n");

        printf("The perimeter of the triangle is : %f\n", perimeter);
        printf("The area of the triangle is : %f\n", area);

        if (sideA == sideB == sideC)
        {
            printf("The triangle is equilateral."); //(равностранен)
        }
        else if (sideA == sideB || sideA == sideC || sideC == sideB)
        {
            printf("The triangle is isosceles."); // (равнобедрен)
        }
        else
        {
            printf("The triangle is scalene."); // (разностранен)
        }
    }
    else
    {
        printf("These sides DO NOT make a triangle.");
    }
}