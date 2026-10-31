#include <stdio.h>
int main()
{
    int n, temp, rev;
    printf("Enter a number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        temp = n % 10;
        rev = temp;
        n = n / 10;
        printf("%d", rev);
    }

    return 0;
}