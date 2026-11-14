#include <stdio.h>
int factorial(int num);
int main()
{
    int n, r;
    printf("Enter no. of people : ");
    scanf("%d", &n);
    printf("Enter no. of seats : ");
    scanf("%d", &r);
    int arrengment = factorial(n) / factorial(n - r);
    printf("The possiable arrengment is %d", arrengment);
    return 0;
}
int factorial(int num)
{
    int fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}