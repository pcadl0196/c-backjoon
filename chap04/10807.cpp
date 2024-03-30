#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int arr[101];
    int v;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    
    cin >> v;

    int result = 0;
    for(int i = 0; i < t; i++)
    {
        if(arr[i] == v)
        {
            result++;
        }
    }

    cout << result;

    return 0;
}