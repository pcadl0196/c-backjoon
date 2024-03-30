#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[9];
    int max = -1;
    int maxIndex;

    for(int i = 0; i < 9; i++)
    {
        cin >> arr[i];

        if(arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    cout << max << "\n";
    cout << maxIndex + 1;
    
    return 0;
}