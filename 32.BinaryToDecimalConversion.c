#include <stdio.h>
#include <math.h>
int main()
{
    int digit, decimal = 0;
    long long int binary, temp;
    int i = 0;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    temp = binary;
    while (binary != 0)
    {
        digit = binary % 10;
        decimal += digit * pow(2, i);
        binary = binary / 10;
        i++;
    }
    printf("The decimal value of %lld is %d", temp, decimal);
    return 0;
}