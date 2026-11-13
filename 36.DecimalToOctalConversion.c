#include <stdio.h>
void convert(int num);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    convert(n);
    return 0;
}
void convert(int num)
{
    int octalarry[32];
    int i = 0;
    while (num > 0)
    {
        octalarry[i] = num % 8;
        num = num / 8;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", octalarry[i]);
    }
}