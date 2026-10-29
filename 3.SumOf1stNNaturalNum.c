#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter a number : ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("The sum of 1st N natural number is %d", sum);
    return 0;
}