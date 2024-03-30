#include <stdio.h>

int main()
{
    int x;
    int y;

    if(x >= -1000 && x <= 1000 && x != 0)
    {
        scanf("%d\n", &x);
    }

    if(y >= -1000 && y <= 1000 && y != 0)
    {
        scanf("%d\n", &y);
    }

    if(x > 0 && y > 0)
    {
        printf("1\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("2\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("3\n");
    }
    else
    {
        printf("4\n");
    }
    return 0;
}