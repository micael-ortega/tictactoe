#include <iostream>
#include "game_logic.hpp"

int main()
{
    int win;
    do
    {
        game_display();
        int valid = move();
        if (valid == -1)
        {
            continue;
        }
        win = check_win();
        if (win != -1)
        {
            game_display();
            display_winner(win);
            break;
        }
        else
        {
            update_player();
        }
    } while (true);

    return 0;
}
