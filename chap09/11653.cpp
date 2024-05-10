#include <iostream>

using namespace std;

// for문을 돌며 n이 i로 나누어지면 i를 출력함
int main()
{
    int N;
    cin >> N;

    if(N == 1) return 0; // N=1 이라면 아무값도 출력하지 않음

    for(int i = 2; i <= N; i++)
    {
        while(N % i == 0)
        {
            cout << i << endl;
            N /= i;
        }
    }
    return 0;
}