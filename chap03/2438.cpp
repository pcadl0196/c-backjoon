#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int j = 1; j <= t; j++)
    {
        for(int i = 1; i <= j; i++)
        {
            cout << "*" ;
        }
        cout << "\n";
    }
    return 0;
}