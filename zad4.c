#include <studio.h>
#include <math.h>

int main()
{
    double sideA, sideB, sideC;
    double perimeter = sideA + sideB + sideC;
    double area = perimeter/2;

    printf("Enter side a: ");
    scanf("%d", &sideA);
    printf("Enter side b: ");
    scanf("%d", &sideB);
    printf("Enter side c: ");
    scanf("%d", &sideC);

    if (sideA < sideB + sideC && sideB < sideA + sideC && sideC < sideA + sideB) {
        printf("These sides DO make a triangle.");


        printf("The perimeter of the triangle is : %d\n", perimeter);
        printf("The area of the triangle is : &d\n", area);

        if(sideA == sideB == sideC){
            print("The triangle is equilateral. (равностранен)");
        }
        else if (sideA == sideB || sideA == sideC || sideC == sideB)
        {
            print("The triangle is isosceles. (равнобедрен)");
        }
        else
        {
            print("The triangle is scalene. (разностранен)");
        }
    }
    else
    {
        printf("These sides DO NOT make a triangle.");
    }
}
