#include "display.hpp"

int player;

bool check_valid_move(int n)
{
    return (n > 0 && n < 10) ? true : false;
}

int check_win()
{
    for (int i = 0; i < 3; i++)
    {
        // Check for rows
        if (c[3 * i] == c[3 * i + 1] and c[3 * i + 1] == c[3 * i + 2])
        {
            return 1;
        }
        // Check for columns
        if (c[i] == c[i + 3] and c[i + 3] == c[i + 6])
        {
            return 1;
        }
        // Check for diagonals
        /*
         * 0 |   -   |   2
         * - |   4   |   -
         * 6 |   -   |   8
         */
        if (c[0] == c[4] and c[4] == c[8])
        {
            return 1;
        }
        if (c[2] == c[4] and c[4] == c[6])
        {
            return 1;
        }
        // Check draw condition
        int count = 0;
        for (int i = 0; i < 9; i++)
        {
            if (c[i] == 'X' or c[i] == 'O')
            {
                count++;
            }
        }
        if (count == 9)
        {
            return 0;
        }
    }
    return -1;
}
int move()
{
    int n;
    bool valid_move = false;
    while (not valid_move)
    {
        if (player == 0)
        {
            cout << "Enter number (X)" << endl;
            cin >> n;
            if (not check_valid_move(n))
            {
                return -1;
            }
            if (c[n - 1 != 'X'] && c[n - 1] != 'O')
            {
                c[n - 1] = 'X';
                valid_move = true;
            }
        }
        else
        {
            cout << "Enter number (O)" << endl;
            cin >> n;
            if (not check_valid_move(n))
            {
                return -1;
            }
            if (c[n - 1 != 'X'] && c[n - 1] != 'O')
            {
                c[n - 1] = 'O';
                valid_move = true;
            }
        }
        if (not valid_move)
        {
            cout << "That spot is already taken" << endl;
        }
    }
    return 1;
}

void update_player()
{
    player += 1;
    player %= 2;
}

void display_winner(int win)
{
    if (win == 1)
    {
        cout << "---- Player " << ((player == 0) ? 'X' : 'O') << " wins" << endl;
    }
    else
    {
        cout << "---- It's a draw" << endl;
    }
}