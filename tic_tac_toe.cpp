#include <iostream>

using namespace std;

void create_player();
void fix_mark();
bool status_game();
void show_board_status();
void play_again();
void reset_board();

char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
bool draw = false;
char mark;
char player1;
char player2;
char reply;

/**
 * main - entry point for tic tac toe game
 *
 * Return: 0 on success
 */
int main()
{
    cout << "It's tic tac toe time!!!\n";
    create_player();
    while (!status_game())
    {
        fix_mark();
    }
    if (mark == player1 && !draw)
    {
        show_board_status();
        cout << "Hurray!!!, player2 wins!!!\n";
    }
    else if (mark == player2 && !draw)
    {
        show_board_status();
        cout << "Hurray!!!, player1 wins!!!\n";
    }
    else
    {
        cout << "It's a draw!!!\n";
    }
    play_again();
    return 0;
}
/**
 * create_player - function asks user for choice of mark
 * and assigns mark respectively
 *
 */
void create_player()
{
    /*Assign 'x' and 'o' to marks*/
    cout << "player1 Choose 'x' or 'o'\n";
    while (1)
    {
        cin >> player1;
        if (player1 == 'x')
        {
            player2 = 'o';
            break;
        }
         else if (player1 == 'o')
        {
            player2 = 'x';
            break;
        }
        /*function recalls itself if invalid input is entered*/
        else
        {
            cout << "Invalid input!!!\nEnter 'x' or 'o'\n";
        }
    }

    cout <<"player1 is : " << player1 <<endl;
    cout <<"player2 is : " << player2 <<endl;
    cout << "let the game, begin!!!\n";
    mark = player1;
}
/**
 * show_board_status - function displays board status
 */
void show_board_status()
{
/*display board status and show slots with numbers*/
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
/**
 * fix_mark - assigns player mark(x or o) to selected slot on board
 */
void fix_mark()
{
    int select, row, col;
    show_board_status();
    if (mark == player1)
    {
        cout << "player1, your turn\n";
    }
    else/*if (mark == player2)*/
    {
        cout << "player2, your turn\n";
    }
    cin >> select;
    /*handle wrong type input*/
    if (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "Wrong type, input mut be an integer\n Try again\n";
            cin >> select;
    }
    if (select < 1 || select > 9)
    {
        cout << "Invalid input!!!" << endl;
        cout << "Enter a number between 1 and 9\n";
        fix_mark();
    }
    row = (select -1) / 3;
    col = (select -1) % 3;
/*
 * check for empty space on board
 * fix mark mark "x" or "o" if empty
 */
    if (board[row][col] != 'x' && board[row][col] != 'o')
    {
        if (mark == player1)
        {
            board[row][col] = mark;
            /*switch player*/
            mark = player2;
        }
        else
        {
            board[row][col] = mark;
            mark = player1;
        }
    }
    else
    {
        cout << "position is occupied, try again\n";
        fix_mark();
    }
}

/*set condition for win, draw or ongoing*/

/**
 * status_game - displays game status (win or draw)
 * Return: true on success
 */
bool status_game()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
/*check for win vaertically or horizontally*/
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
        {
            return true;
        }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
    {
        return true;
    }
/*check if all board spaces are filled to know if game is still on*/
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
/**
 * play_again - asks if player would like to play again and act accordingly
 */
void play_again()
{
    cout << "Would you like to play again :)\n";
    cout << "Enter y or n\n";
    cin >> reply;
    if (reply == 'y')
    {
        reset_board();
        main();
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
/**
 * reset_board - resets board to initial state for a new round
 */
void reset_board()
{
    cout << "Board reset\n";
    char num = '1';
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            board[i][j] = num++;
        }
    }
}