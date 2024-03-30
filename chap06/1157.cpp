#include <iostream>

using namespace std;

int alpha[26];
int cnt = 0;
string input;
// 아스키 코드 : 대문자 65 ~90 , 소문자 97 ~ 122

int main()
{
    cin >> input;

    // 빈도수 체크
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] < 97)
        {
            alpha[input[i] - 65]++; // 대문자
        }
        else
        {
            alpha[input[i] - 97]++; // 소문자
        }
    }

    int max = 0; 
    int max_index = 0;

    for(int i = 0; i <26; i++)
    {
        if(max < alpha[i])
        {
            max = alpha[i];
            max_index = i;
        }
    }

    // 가장 많이 사용된 알파벳이 여러개인가
    for(int i = 0; i < 26; i++)
    {
        if(max == alpha[i])
        {
            cnt++;
        }
    }

    // 여러개라면 ? 출력, 아니라면 대문자로 출력
    if(cnt > 1)
    {
        cout << "?";
    }
    else
    {
        cout << (char)(max_index + 65);
    }
    return 0;
}