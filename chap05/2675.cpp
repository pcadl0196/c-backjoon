#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; //테스트 케이스 갯수
    string s; //문자열
    int r; //반복 횟수

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> r >> s;
        for(int j = 0; j < s.length(); j++) //반복
        {
            for(int k = 0; k < r; k++)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }

    return 0;
}