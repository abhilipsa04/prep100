#include <stdio.h>
void Primefactor(int num);
int main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    Primefactor(num);
    return 0;
}
void Primefactor(int num)
{
    printf("Prime factors of the number are ");
    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            printf("%d\t", i);
            num = num / i;
        }
    }
}
