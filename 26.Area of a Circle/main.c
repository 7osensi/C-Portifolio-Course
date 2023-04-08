#include <stdio.h>

#define PI 3.141592


void calculateArea(float radius)
{
    printf("Area of circle of radius %0.2f: %0.2f", radius, (radius * radius * PI)); /* Circle area = 𝝅r^2 */
}
int main()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    calculateArea(radius);

    return 0;
}