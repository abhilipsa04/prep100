#include <stdio.h>
int main()
{
    int n, rev = 0, rem, temp;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    };
    if (n == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}