#include <stdio.h>
#include <math.h>
int main()
{
    long long n, root;
    printf("Enter a number : ");
    scanf("%lld", &n);
    root = (long long)sqrt(n);
    if (n > 0 && root * root == n)
    {
        printf("Perfect square");
    }
    else
    {
        printf("Not perfect square");
    }
    return 0;
}