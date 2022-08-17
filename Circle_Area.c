#include <stdio.h>
int main()
{
    float radius, area;
    printf("Enter the Radius of the Circle : ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of circle is  %.2f having the radius %.2f", area, radius);


    return 0;
}