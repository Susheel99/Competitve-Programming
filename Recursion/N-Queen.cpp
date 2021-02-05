#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool issafe(int board[][10], int i, int j, int n)
{
    //columns
    for (int row = 0; row < i; row++)
    {
        if (board[row][j] == 1)
            return false;
    }

    //left diagnol
    int x = i, y = j;
    while (x >= 0 and y >= 0)
    {
        if (board[x][y] == 1)
            return false;

        x--;
        y--;
    }
    //right diagnol
    x = i;
    y = j;
    while (x >= 0 and y < n)
    {
        if (board[x][y] == 1)
            return false;

        x--;
        y++;
    }
}

bool nqueen(int board[][10], int i, int n)
{
    if (i == n)
    {
        for (int p = 0; p < n; p++) {
            for (int q = 0; q < n; q++) {
                if (board[p][q] == 1)
                    cout << "Q"<<" ";

                cout << "_"<<" ";
            }
            cout << endl;

        }

        return true;
    }
    for (int j = 0; j < n; j++)
    {
        if (issafe(board, i, j, n)) {
            board[i][j] = 1;

            bool nextqueen = nqueen(board, i + 1, n);
            if (nextqueen)
                return true;
        }

        board[i][j] = 0;
    }
    return false;
}
int main()
{
    int no;
    cin >> no;
    while (no--)
    {
        int i, n;
        cin >> n;
        int board[10][10] = { 0 };
        nqueen(board, 0, n);
    }
}