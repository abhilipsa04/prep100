#include <stdio.h>
#include <math.h>
int main()
{
    int digit = 0, decimal = 0;
    long long int octal, temp;
    printf("Enter an octal number :"); //(0-7)//
    scanf("%lld", &octal);
    int i = 0;
    temp = octal;
    while (octal != 0)
    {
        digit = octal % 10;
        decimal += digit * pow(8, i);
        octal = octal / 10;
        i++;
    }
    printf("The decimal value of %lld is %d\n", temp, decimal);
    if (decimal == 0)
    {
        printf("0");
    }
    long long binary[32];
    int j = 0, rem;

    while (decimal > 0)
    {
        rem = decimal % 2;
        binary[j] = rem;
        decimal = decimal / 2;
        j++;
    }
    printf("Binary number = ");

    for (i = j - 1; i >= 0; i--)
    {
        printf("%lld", binary[i]);
    }
    return 0;
}
