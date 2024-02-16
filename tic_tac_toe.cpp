#include <iostream>

using namespace std;

void create_player();
void fix_mark();
bool status_game();
void show_board_status();
void play_tictactoe();
void play_again();

char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
char mark;
bool draw = false;
char player;
char player1;
char player2;

int main()
{
    play_tictactoe();
    play_again();
    return 0;
}
void play_tictactoe()
{
    cout << "It's tic tac toe time!!!\n";
    create_player();
    while (!status_game())
    {
        fix_mark();
    }
    if (player == player1 && !draw)
    {
        show_board_status();
        cout << "player1 wins!!!\n";
    }
    else if (player == player2 && !draw)
    {
        show_board_status();
        cout << "player2 wins!!!\n";
    }
    else
    {
        cout << "It's a draw!!!\n";
    }
}
void create_player()
{
    //Assign 'x' and 'o' to marks
    cout << "player1 Choose 'x' or 'o'\n";
    cin >> player1;
    if (player1 == 'x')
    {
        player2 = 'o';
    }
    else if (player1 == 'o')
    {
        player2 = 'x';
    }
    //function recalls itself if invalid input is entered
    else
    {
        cout << "Invalid input!!!\nEnter 'x' or 'o'\n";
        create_player();   
    }
    
    cout <<"player1 is : " << player1 <<endl;
    cout <<"player2 is : " << player2 <<endl;
    cout << "let the game, begin!!!\n";
}
void show_board_status()
{
//display board status and show slots with numbers
    cout << "     |     |     \n";
    cout << "  "<<board[0][0]<< "  |  " << board[0][1] << "  |  " << board[0][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  "<<board[1][0]<< "  |  " << board[1][1] << "  |  " << board[1][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  "<<board[2][0]<< "  |  " << board[2][1] << "  |  " << board[2][2] << "  \n";
    cout << "     |     |     \n";
}

void fix_mark()
{
    int select, row, col;
    //player = player1;
    show_board_status();
    if (player == player1)
    {
        cout << "player1, your turn\n";
    }
    else// if (player == player2)
    {
        cout << "player2, your turn\n";
    }
    cin >> select;
    if (select < 1 || select > 9)
    {
        cout << "Invalid input!!!" << endl;
        cout << "try again\n";
        fix_mark();
    }
    row = (select -1) / 3;
    col = (select -1) % 3;
//check for empty space on board
//fix player mark "x" or "o" if empty
    if (board[row][col] != 'x' && board[row][col] != 'o')
    {
        if (player == player1)
        {
            board[row][col] = 'x';
            player = player2;
        }
        else
        {
            board[row][col] = 'o';
            player = player1;
        }
    }
    else
    {
        cout << "position is occupied\n";
        fix_mark();
    }
}

//set condition for win, draw or ongoing

bool status_game()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
//check for win vaertically or horizontally
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
        {
            return true;
        }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
    {
        return true;
    }
//check if all board spaces are filled to know if game is still on
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (board[i][j] != 'x' && board[i][j] != 'o')
            {
                return false;
            }
        }
    }
    draw = true;
    return true;     
}

void play_again()
{
    char reply;
    cout << "Would you like to play again :)\n";
    cin >> reply;
    if (reply == 'y')
    {
        play_tictactoe();
    }
    else if (reply == 'n')
    {
        cout << "Bye, see you next time :)\n";
    }
    else
    {
        cout << "Invalid Input!!!\n" << "Enter y or n\n";
        play_again();
    }
}
    
