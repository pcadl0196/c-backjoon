#include <iostream>

using namespace std;

int main()
{
    int king = 1;
    int queen = 1;
    int rook = 2;
    int bishop = 2;
    int knight = 2;
    int pawn = 8;

    // 입력받을 변수
    int in_king, in_queen, in_rook, in_bishop, in_knight, in_pawn;

    cin >> in_king >> in_queen >> in_rook >> in_bishop >> in_knight >> in_pawn;

    cout << king - in_king << " " << queen - in_queen << " " << rook - in_rook << " " << bishop - in_bishop << " " << knight - in_knight << " " << pawn - in_pawn << " ";
    return 0;
}