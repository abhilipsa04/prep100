#include <stdio.h>
int main()
{
    int n, temp, sum = 0, rem;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    if (n > 0 && n % sum == 0)
    {
        printf("Harshad number");
    }
    else
    {
        printf("Not harshad number");
    }

    return 0;
}