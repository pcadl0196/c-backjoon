#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // 두 표준 입출력 동기화 해제

    int dot = 2; // 초기 상태(점 2개 -> 제곱하여 4개)
    int n;
    cin >> n; // n번의 과정 거침

    while(n--)
    {
        dot = dot * 2 - 1; 
    }
    cout << dot * dot; // 과정 1번 거친 후 점 3개 * 3
    return 0;
}