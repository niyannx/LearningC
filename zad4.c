#include <stdio.h>
#include <math.h>

int main()
{
    double sideA, sideB, sideC;

    printf("Enter side a: ");
    scanf("%d", &sideA);
    printf("Enter side b: ");
    scanf("%d", &sideB);
    printf("Enter side c: ");
    scanf("%d", &sideC);
    
    double perimeter = sideA + sideB + sideC;
    double area = perimeter/2;
    
    if (sideA < sideB + sideC && sideB < sideA + sideC && sideC < sideA + sideB) {
        printf("These sides DO make a triangle.\n");


        printf("The perimeter of the triangle is : %d\n", perimeter);
        printf("The area of the triangle is : %d\n", area);

        if(sideA == sideB == sideC){
            print("The triangle is equilateral.");
        }
        else if (sideA == sideB || sideA == sideC || sideC == sideB)
        {
            print("The triangle is isosceles.");
        }
        else
        {
            print("The triangle is scalene.");
        }
    }
    else
    {
        printf("These sides DO NOT make a triangle.");
    }
}
