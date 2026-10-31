#include <stdio.h>
int main()
{
    int n, sum, rem;
    printf("Enter a number : ");
    scanf("%d", &n);
    sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}