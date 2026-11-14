#include <stdio.h>
int main()
{
    int n1, n2, d1, d2, c, gcd_no;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter d1: ");
    scanf("%d", &d1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    printf("Enter d2: ");
    scanf("%d", &d2);

    int x = (n1 * d2) + (n2 * d1);
    int y = d1 * d2;

    for (c = 1; c <= x && c <= y; ++c)
    {
        if (x % c == 0 && y % c == 0)
            gcd_no = c;
    }

    printf("The addition of (%d/%d)+(%d/%d) = %d/%d", n1, d1, n2, d2, x / gcd_no, y / gcd_no);
    return 0;
}