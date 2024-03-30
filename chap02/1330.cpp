#include <iostream>

using namespace std;

int main()
{
    int A = 1;
    int B = 2;

    scanf("%d %d", &A, &B);

    if(A > B)
    {
        printf(">");
    }
    else if(A < B)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }
    return 0;
}