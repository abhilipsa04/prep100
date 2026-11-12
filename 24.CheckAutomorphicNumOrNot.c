#include <stdio.h>
int main()
{
    int n, square;
    printf("Enter a number : ");
    scanf("%lld", &n);
    square = n * n;
    int rem = square % 10;
    int rem1 = n % 10;
    if (rem == rem1)
    {
        printf("Automorphic number");
    }
    else
    {
        printf("Not automorphic number");
    }
    return 0;
}