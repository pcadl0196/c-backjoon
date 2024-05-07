#include <iostream>

using namespace std;

int main()
{
    // 1. 입력받은 수를 1부터 n까지 나눈다
    // 2. 소수는 1과 자기자신을 나눌때만 나머지가 0이됨
    // 3. 카운트해서 2가 나오면 출력(약수가 1과 본인(n)이기 때문)
    int test;
    cin >> test;
    int cnt1 = 0; // 약수 최댓값

    for(int i = 0; i < test; i++)
    {
        int n;
        cin >> n;

        int cnt = 0; // 약수의 갯수

        for(int i = 1; i <= n; i++)
        {
            if(n%i == 0)
            {
                cnt++;
            }
        }

        if(cnt == 2) // 약수가 두개일떄
        {
            cnt1++; 
        }
    }

    cout << cnt1;
    return 0;
}