#include <stdio.h>
int main()
{
    int n1, n2, HCF = 1;
    printf("enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            HCF = i;
        }
    }
    printf("The HCF is %d", HCF);
    // HCF = Highest Common Factor//
    return 0;
}