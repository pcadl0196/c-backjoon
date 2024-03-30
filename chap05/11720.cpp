#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string number; //공백이 없어야하기때문
    int totalNumber = 0;

    cin >> n;
    cin >> number;

    for(int i = 0; i < n; i++)
    {
        totalNumber += number[i] - '0';
    }

    cout << totalNumber;
    return 0;
}