#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    string s;
    for(int i = 1; i <= t; i++)
    {
        cin >> s;
        int size = s.length();
        cout << s[0] << s[size - 1] << "\n";
    }

    return 0;
}