#include <iostream>

using namespace std;

// 1. y % x = 0 일경우 factor
// 2. x % y = 0 일경우 multipe
// 3. 둘다 아닌경우 neither 출력

int main()
{
    int x, y;
    cin >> x >> y;

    while(x != 0 && y != 0)
    {
        if(y % x == 0)
        {
            cout << "factor" << '\n';
        }
        else if(x % y == 0)
        {
            cout << "multiple" << '\n';
        }
        else
        {
            cout << "neither" << '\n';
        }

        cin >> x >> y;
    }
    return 0;
}