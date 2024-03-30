#include <stdio.h>

int main()
{
    int x; //총금액
    int n; //구매한 물건의 종류의 수
    int sum = 0; // 총합

    scanf("%d %d", &x, &n);

    for(int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d\n", &a, &b);
        sum = sum + a*b;
    }
    scanf("%d\n", &sum);

    if(x == sum)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}