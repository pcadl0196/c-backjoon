#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;

    for(int i = 0; i < alphabet.length(); i++)
    {
        cout << (int)s.find(alphabet[i]) << " ";
    }
    return 0;
}