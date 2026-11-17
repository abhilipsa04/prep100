#include <stdio.h>
int sum_of_two_primes(int n);
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (sum_of_two_primes(i) == 1)
        {
            if (sum_of_two_primes(n - i) == 1)
            {
                printf("%d can be expressed as the sum of %d & %d \n", n, i, n - i);
                flag = 1;
            }
        }
    }
    if (flag == 0)
        printf("%d cannot be expressed as the sum of two primes", n);
    return 0;
}
int sum_of_two_primes(int n)
{
    int i, isprime = 1;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    return isprime;
}