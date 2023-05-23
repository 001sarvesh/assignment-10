// write a function to calculate the area of circle(TSRS)

#include <stdio.h>
#include <math.h>

float Area(float r)
{
    float A;
    A = 3.14 * r * r;
    return A;
}

int main()
{
    float r;
    printf("Enter the radius of circle :");
    scanf("%f", &r);
    float A = Area(r);
    printf("Area is : %.2f\n", Area(r));
    return 0;
}