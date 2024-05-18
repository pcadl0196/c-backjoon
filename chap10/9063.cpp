#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // 문제 : N개의 점을 둘러싸는 최소 크기의 직사각형 넓이를 출력
    // 조건 : [[
    // 1. 옥구슬의 위치 N개가 주어짐
    // 2. 옥구슬의 위치는 2차원 정수 좌표로 주어짐
    // 3. 옥구슬은 같은 위치에 여러개 발견될 수 있음
    // 4. x축의 양의 방향을 동쪽, y축의 양의 방향을 북쪽이라 가정
    // ]] 조건
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; 
    cin >> N;
    
    int x, y; // 각점의 좌표 주어짐
    vector<int> vecX;
    vector<int> vecY;

    for(int i = 0; i < N; i++)
    {   
        cin >> x >> y;
        vecX.push_back(x);
        vecY.push_back(y);
    }

    int minX = 0; // x, y 축의 최대,최소값
    int maxX = 0;
    int minY = 0;
    int maxY = 0;

    minX = *min_element(vecX.begin(), vecX.end());
    maxX = *max_element(vecX.begin(), vecX.end()); // mix,max element는 주소값 return
    minY = *min_element(vecY.begin(), vecY.end());
    maxY = *max_element(vecY.begin(), vecY.end()); 

    if(N > 1) // 점의 개수가 1개 이상일때부터
    {
        int result = 0;
        result = (maxX - minX) * (maxY - minY);
        cout << result << '\n';
    }
    else
    {
        cout << "0" << '\n';
    }
    
    return 0;
}