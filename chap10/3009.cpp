#include <iostream>

using namespace std;

int main()
{
    // 직사각형은 x축과 y축을 기준으로 반드시 쌍을 이루고 있음
    int x[3];
    int y[3];

    for(int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }

    if(x[0] == x[1])
    {
        cout << x[2] << " ";
    }
    else if(x[0] == x[2])
    {
        cout << x[1] << " ";
    }
    else
    {
        cout << x[0] << " ";
    }

    if(y[0] == y[1])
    {
        cout << y[2];
    }
    else if(y[0] == y[2])
    {
        cout << y[1];
    }
    else
    {
        cout << y[0];
    }
    return 0;
}