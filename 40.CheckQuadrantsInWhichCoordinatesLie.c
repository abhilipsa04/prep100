#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter(x,y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("point(%d,%d)lies in the first quadrant", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("point(%d,%d)lies in the second quadrant", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("point(%d,%d)lies in the second quadrant", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("point(%d,%d)lies in the third quadrant", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("point(%d,%d)lies in the fourth quadrant", x, y);
    }
    else if (x == 0 && y == 0)
    {
        printf("point(%d,%d)lies at the origin", x, y);
    }
    else if (x != 0 && y == 0)
    {
        printf("point(%d,%d)lies on x-axis", x, y);
    }
    else if (x == 0 && y != 0)
    {
        printf("point(%d,%d)lies on y-axis", x, y);
    }
    return 0;
}