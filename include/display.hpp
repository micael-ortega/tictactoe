#include <iostream>
#include <vector>

using namespace std;

vector<char>
    c = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void introduction() { cout << "\tWelcome to the Tic-Tac-Toe" << endl; }

void print_board()
{
    cout << "    |       |   " << endl;
    cout << c[0] << "   |   " << c[1] << "   |   " << c[2] << endl;
    cout << "____|_______|____" << endl;
    cout << "    |       |   " << endl;
    cout << c[3] << "   |   " << c[4] << "   |   " << c[5] << endl;
    cout << "____|_______|____" << endl;
    cout << "    |       |   " << endl;
    cout << c[6] << "   |   " << c[7] << "   |   " << c[8] << endl;
    //    cout << "____|_______|____" << endl;
    cout << "    |       |   " << endl;
} // namespace std


void game_display()
{
    system("clear");
    introduction();
    print_board();
}

