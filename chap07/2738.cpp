#include <iostream>

using namespace std;

int arr1[101][101];
int arr2[101][101]; // 배열 2개 선언

int main()
{
    int n;
    int m;

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < m; k++)
        {
            cin >> arr1[i][k]; 
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < m; k++)
        {
            cin >> arr2[i][k];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < m; k++)
        {
            cout << arr1[i][k] + arr2[i][k] << ' ';
        }
        cout << '\n';
    }
    return 0;
}