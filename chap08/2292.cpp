#include <iostream>

using namespace std;

int main()
{
    // 1. 2 ~ 7번까지는 2번만에 이동가능
    // 2. 8 ~19번까지는 3번만에 이동가능
    // 3. 20 ~ 38번까지는 4번만에 이동가능
    // 바깥으로 나갈때마다 6, 12, 18.. 식으로 6*레이어 식으로 범위 증가

    int number; // 가고자하는 숫자
    cin >> number;

    int i = 0;
    for(int sum = 2; sum <= number; i++)
    {
        sum += 6*i;
    }

    if(number == 1)
    {
        i = 1;
    }
    cout << i;
    return 0;
}