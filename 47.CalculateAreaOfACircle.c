#include <stdio.h>
int main()
{
    float r, p = 3.14, area;
    printf("Enter radius:");
    scanf("%f", &r);
    area = p * r * r;
    printf("Area of the circle is %.2f", area);
    return 0;
}