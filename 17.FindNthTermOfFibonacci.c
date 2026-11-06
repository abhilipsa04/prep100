#include <stdio.h>
int main()
{
    int n, c, a = 0, b = 1;
    printf("enter n : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d", c);
    return 0;
}