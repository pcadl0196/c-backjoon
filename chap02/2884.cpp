#include <stdio.h>

int main()
{
    int H = 0;
    int M = 45;

    if((H >=0 && H <= 23) && (M >= 0 && M <= 59))
    {
        scanf("%d\n", &H);
        scanf("%d\n", &M);

        if(H > 0 && H <24)
        {
            if(M > 45 && M <60)
            {
                printf("%d %d\n", H, M - 45);
            }
            else if(M == 45)
            {
                printf("%d %d\n", H, 0);
            }
            else
            {
                printf("%d %d\n", (H-1), (M+60)-45);
            }
        }
        else if(H == 0)
        {
            if(M > 45 && M <60)
            {
                printf("%d %d\n", H, M - 45);
            }
            else
            {
                if(M == 45)
                {
                    printf("%d %d\n", 0, 0);
                }
                else
                {
                    printf("%d %d\n", 23, (M+60)-45);
                }
            }
        }
    }
    return 0;
}