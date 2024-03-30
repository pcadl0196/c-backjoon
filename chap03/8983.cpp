#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d\n", &n);
    for(int a = 1; a <= n; a++)
    {
        sum = sum + a;
    }
    printf("%d\n", sum);
    return 0;
}