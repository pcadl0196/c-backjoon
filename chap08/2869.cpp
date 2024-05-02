#include <iostream>

using namespace std;

// 1. 최종적으로 가야하는 목표는 V-A (다음날 아침에 A만큼 올라서 정상에 도달 가능)
// 2. V-A를 가는데 걸리는 기간 : (V-A)/(A-B)
// 3. (V-A)/(A-B)가 나머지가 0일 경우 : (V-A)/(A-B) 일만큼 오름, 마지막 날 A만큼만 오름
// 4. (V-A)/(A-B)가 나머지가 0이 아닐 경우 : 정상에 도달하기에 이동거리가 조금 모자라서 1 추가

int main()
{
    int a, b, v;
    cin >> a >> b >> v;

    int day = 1;
    day += (v-a) / (a-b);

    if((v-a)%(a-b) != 0)
    {
        day++;
    }

    if(a >= v)
    {
        cout << "1";
    }
    else
    {
        cout << day;
    }
    
    return 0;
}