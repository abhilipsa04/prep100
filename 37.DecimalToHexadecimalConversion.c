#include <stdio.h>
void convert(int num);
int main()
{
    int decimal = 5643;
    convert(decimal);
    return 0;
}
void convert(int num)
{
    char Hexa[100];
    int i = 0;
    int rem = 0;
    while (num > 0)
    {
        rem = num % 16;
        if (rem < 10)
        {
            Hexa[i] = rem + 48;
            i++;
        }
        else
        {
            Hexa[i] = rem + 55;
            i++;
        }
        num = num / 16;
    }
    printf("Hexadecimal:");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", Hexa[j]);
    }
}