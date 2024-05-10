#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cin >> a >> b;

    if(a > 0 && b > 0)
    {
        int c = 0;
        c = a * b;
        cout << c << endl;
    }
    return 0;
}