#include <stdio.h>
int main()
{
    int a = 0, b = 1, n = 10;
    int c;
    printf("%d %d\n", a, b);
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
    return 0;
}