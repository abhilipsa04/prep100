#include <stdio.h>
void convert(int num);
int main()
{
    int n = 2005;
    convert(n);
    return 0;
}
void convert(int num)
{
    int binaryarry[32];
    int i = 0;
    while (num > 0)
    {
        binaryarry[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binaryarry[i]);
    }
}