#include <stdio.h>
#include <math.h>
int CalculatePower(int base, int exponent);
int main()
{
    int n, temp, count = 0, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = n;
    int remainder, power;
    while (temp > 0)
    {
        remainder = temp % 10;
        power = CalculatePower(remainder, count);
        sum += power;
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("Amstrong Number");
    }
    else
    {
        printf("Not amstrong num");
    }
    return 0;
}
int CalculatePower(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    return result;
}