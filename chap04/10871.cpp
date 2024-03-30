#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int arr[10001];
    int v;

    cin >> t >> v;

    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < t; i++)
    {
        if(arr[i] < v)
        {
            cout << arr[i] << " " ;
        }
    }
    return 0;
}