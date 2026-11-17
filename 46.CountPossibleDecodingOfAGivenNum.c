#include <stdio.h>
#include <string.h>
int cnt_decoding_digits(char *dig, int a);
int main()
{
    char digit[15];
    printf("Enter the sequence : ");
    scanf("%s", &digit);
    int a = strlen(digit);
    printf("Possible count of decoding of the sequence : %d\n", cnt_decoding_digits(digit, a));
    return 0;
}
int cnt_decoding_digits(char *dig, int a)
{
    int cnt[a + 1];
    cnt[0] = 1;
    cnt[1] = 1;
    for (int k = 2; k <= a; k++)
    {
        cnt[k] = 0;
        cnt[k] += cnt[k - 1];

        if (dig[k - 2] == '1' || (dig[k - 2] == '2' && dig[k - 1] < '7'))
        {
            cnt[k] += cnt[k - 2];
        }
    }
    return cnt[a];
}
