#include <stdio.h>
int main()
{
    int n1, n2 = 0, rem;
    printf("Enter a number : ");
    scanf("%d", &n1);
    if (n1 == 0)
    {
        n2 = 1;
    }
    while (n1 > 0)
    {
        rem = n1 % 10;
        if (rem == 0)
        {
            rem = 1;
        }
        n1 = n1 / 10;
        n2 = n2 * 10 + rem;
    }
    n1 = 0;
    while (n2 > 0)
    {
        int r = n2 % 10;
        n1 = n1 * 10 + r;
        n2 = n2 / 10;
    }
    printf("Convert number is %d", n1);
    return 0;
}
