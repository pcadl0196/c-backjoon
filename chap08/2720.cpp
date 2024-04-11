#include <iostream>

using namespace std;

int t, money;

int main()
{
    // 조건 1 : 거스름돈은 항상 $5.00 이하
    // 조건 2 : 손님이 받는 동전의 갯수 최소화
    // 쿼터(Quarter, $0.25)
    // 다임(Dime, $0.10)
    // 니켈(Nickel, $0.05)
    // 페니(Penny, $0.01)
    
    cin >> t;

    while(t--)
    {
        int q = 0, d = 0, n = 0, p = 0; // 갯수
        cin >> money;

        while(money)
        {
            if(money >= 25)
            {
                q++;
                money -= 25;
            }
            else if(money >= 10)
            {
                d++;
                money -= 10;
            }
            else if(money >= 5)
            {
                n++;
                money -= 5;
            }
            else
            {
                p++;
                money -= 1;
            }
        }
        cout << q << " " << d << " " << n << " " << p << "\n";
    }
    return 0;
}