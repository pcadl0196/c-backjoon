#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    int rm[42] = {};
    int count = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> num;
        rm[num % 42]++;
    }

    for(int i = 0; i < 42; i++)
    {
        if(rm[i] != 0)
        {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}