#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 1. m 부터 n까지 for 문을 돌리고 1과 자기 자신만을 나누었을때 0이 되는 수만 카운트 함
    // 2. 카운트가 2개 였을때만 벡터 배열에 푸시함
    // 3. 벡터 배열안에 아무것도 들어있지 않으면 -1 출력
    // 4. 그렇지 않으면 sum 과 최솟값 출력

    int m, n;
    cin >> m >> n;

    vector<int> vec;

    for(int i = m; i <= n; i++)
    {
        int cnt = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i%j == 0)
            {
                cnt++;
            }
        }

        if(cnt == 2)
        {
            vec.push_back(i);
        }
    }

    int sum = 0;

    for(int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }

    if(vec.size() == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << sum << "\n" << vec[0];
    } 
    return 0;
}