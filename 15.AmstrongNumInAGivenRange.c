#include <stdio.h>
#include <math.h>
int CalculatePower(int base, int exponent);
int main()
{
    int num, temp, count, remainder, sum, power, start, end;
    printf("enter starting number : ");
    scanf("%d", &start);
    printf("enter ending number : ");
    scanf("%d", &end);
    for (int a = start; a <= end; a++)
    {
        num = a;
        temp = num;
        count = 0;
        sum = 0;
        while (temp > 0)
        {
            temp = temp / 10;
            count++;
        }
        temp = num;
        while (temp > 0)
        {
            remainder = temp % 10;
            power = CalculatePower(remainder, count);
            sum += power;
            temp = temp / 10;
        }
        if (sum == num)
        {
            printf("%d\n", num);
        }
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
