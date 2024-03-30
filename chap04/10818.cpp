#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[1000001];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n); //0 ~ n-1 범위 정렬

    cout << arr[0] << " " << arr[n-1];
    
    return 0;
}