#include <stdio.h>
int main()
{
    int a, b, c, largest;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    //     if (a > b && a > c)
    //     {
    //         printf("%d is greater", a);
    //     }
    //     else if (b > a && b > c)
    //     {
    //         printf("%d is greater", b);
    //     }
    //     else
    //     {
    //         printf("%d is greater", c);
    //     }

    // second way//

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The greatest number is: %d\n", largest);

    return 0;
}