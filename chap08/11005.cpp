#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N, B; // 10진법 수 N, B진법
    cin >> N >> B;

    string result = "";

    while(N > 0)
    {
        int r = N % B;

        if(r < 10)
        {
            result += (char)(r + '0'); // 문자로 변환시켜주려면 int 값에 '0' 문자를 더해줌
        }
        else
        {
            result += (char)(r - 10 + 'A'); // 10을 문자 A로 변환시켜주려면 숫자 10을 빼고 'A'를 더해주거나 55를 더해줘야함
        }

        N /= B; // 나눠줘야 다음 연산 진행
    }
    reverse(result.begin(), result.end()); // 문자열 순서 바꿔주기

    cout << result << '\n';
    return 0;
}