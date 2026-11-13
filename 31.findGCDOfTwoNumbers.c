#include <stdio.h>
int main()
{
    int n1, n2, GCD = 1;
    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            GCD = i;
        }
    }
    printf("The GCD of %d & %d is %d", n1, n2, GCD);
    // GCD = Greatest common divisor//
    return 0;
}