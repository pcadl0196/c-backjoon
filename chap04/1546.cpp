#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double sum = 0;
    cin >> n;

    double arr[1001];
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
    {
        sum = sum + (arr[i] / arr[n-1]) * 100;
    }

    cout << sum / n;
    
    return 0;
}