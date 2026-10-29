#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    if (N > 0)
    {
        printf("positive number");
    }
    else if (N < 0)
    {
        printf("Negative number");
    }
    else
    {
        printf("zero");
    }
    return 0;
}