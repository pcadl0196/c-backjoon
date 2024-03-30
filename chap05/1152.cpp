#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int res = 1;

    getline(cin, s);

    if(s.length() == 1 && s[0] == ' ')
    {
        cout << 0;
        return 0;
    }

    for(int i = 1; i < s.length() - 1; i++)
    {
        if(s[i] == ' ')
        {
            res++;
        }
    }

    cout << res;

    return 0;
}