#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a & b : ");
    scanf("%d %d", &a, &b);
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    printf("The sum is %d ", sum);
    return 0;
}