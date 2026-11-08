#include <stdio.h>
#include <math.h>
int main()
{
    double base, exponent, result;
    printf("Enter base & exponent : \n");
    scanf("%lf %lf", &base, &exponent);
    result = pow(base, exponent);
    // printf("power(%lf) = %lf", base, result);
    printf("power(%.1lf) = %.1lf", base, result);
    return 0;
}