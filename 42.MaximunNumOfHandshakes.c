#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of people : ");
    scanf("%d", &n);
    int total = ((n - 1) * n) / 2;
    printf("The max no. of handshakes is %d", total);
    return 0;
}