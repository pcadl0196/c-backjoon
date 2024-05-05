#include <iostream>

using namespace std;

// 1. n(자연수) 와 k(n의 약수중 k번째로 작은수)를 입력받음
// 2. 약수 갯수를 세어줄 정수형 변수 cnt를 0으로 초기화
// 3. 약수를 a 배열에 순서대로 저장하기 위해 크기가 10000인 정수형 배열 선언
// 4. a 배열의 인덱스 값을 나타내줄 j를 0으로 초기화
// 5. 입력해준 n을 1부터 n까지 for문을 돌림
// 6. for 문을 i로 나누었을떄 0이되면 i가 n의 약수가 됨
// 7. a 배열에 약수를 저장
// 8. cnt와 j를 증가시켜줌
// 9. n의 약수의 갯수가 k보다 적어서 k번째 약수가 존재하지 않을 경우 0을 출력해줘야 함
// 10. cnt가 k보다 크거나 작을때는 a배열의 k-1번째 값을 출력해주고 그 경우가 아니라면 0 출력

int main()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int a[10000];
    int j = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            a[j] = i;
            j++;
            cnt++;
        }
    }

    if(cnt >= k)
    {
        cout << a[k-1];
    }
    else
    {
        cout << "0";
    }

    return 0;
}