#include <stdio.h>
int main()
{
    int num1, num2, sum1 = 0, sum2 = 0;
    printf("Enter two number : ");
    scanf("%d %d", &num1, &num2);
    for (int i = 1; i < num1; i++)
    {
        if (num1 % i == 0)
        {
            sum1 = sum1 + i;
        }
    }
    for (int j = 1; j < num2; j++)
    {
        if (num2 % j == 0)
        {
            sum2 = sum2 + j;
        }
    }
    if (sum1 / (float)num1 == sum2 / (float)num2)
    {
        printf("Friendly pair");
    }
    else
    {
        printf("Not friendly pair");
    }
    return 0;
}