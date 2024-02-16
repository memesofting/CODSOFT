#include <iostream>

using namespace std;

void create_player_board();
void fix_mark();
bool status_game();

char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
char mark;
bool draw;
char player;
char player1;
char player2;

int main()
{
    while (true)
    {
        create_player_board();
        fix_mark();
        status_game();
    }
    if (player == player1 && draw == false)
    {
        cout << "player1 wins!!!\n";
    }
    else if (player == player2 && draw == false)
    {
        cout << "player2 wins!!!\n";
    }
    else
    {
        cout << "It's a draw!!!\n";
    }
    return 0;
}
void create_player_board()
{
    cout << "It's tic tac toe time!!!\n";
    
    
    //Assign 'x' and 'o' to marks
    cout << "player1 Choose 'x' or 'o'\n";
Here:
    cin >> player1;
    if (player1 == 'x')
    {
        player2 = 'o';
    }
    else if (player1 == 'o')
    {
        player2 = 'x';
    }
    else
    {
        cout << "Invalid input!!!\nEnter 'x' or 'o'\n";
        goto Here;   
    }
    //display board status and show slots with numbers
    cout <<"player1 is : " << player1 <<endl;
    cout <<"player2 is : " << player2 <<endl;
    cout << "let the game, begin!!!\n";

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
    int i, j;
    int select, row, col;
    
    //if (player1 == 'x' || player1 == 'o')
    if (player == 'x')
    {
        cout << "player1, your turn\n";
        //cin >> select;
    }

    //if (player2 = 'x' || player2 == 'o')
    else if (player == 'o')
    {
        cout << "player2, your turn\n";
        //cin >> select;
    }
    cin >> select;
    if (select < 1 || select > 9)
    {
        cout << "Invalid input!!!" << endl;
        cout << "try again\n";
        fix_mark();
    }
    if (select == 1)
    {
        row = 0;
        col = 0;
    }
    if (select == 2)
    {
        row = 0;
        col = 1;
    }
    if (select == 3)
    {
        row = 0;
        col = 2;
    }
    if (select == 4)
    {
        row = 1;
        col = 0;
    }
    if (select == 5)
    {
        row = 1;
        col = 1;
    }
    if (select == 6)
    {
        row = 1;
        col = 2;
    }
    if (select == 7)
    {
        row = 2;
        col = 0;
    }
    if (select == 8)
    {
        row = 2;
        col = 1;
    }
    if (select == 9)
    {
        row = 2;
        col = 2;
    }
//check for empty space on board
//fix player mark "x" or "o" if empty
    if (player == 'x' && (board[row][col] != 'x' && board[row][col] != 'o'))
    {
        board[row][col] = 'x';
        player = 'o';
    }
    else if (player == 'o' && (board[row][col] != 'x' && board[row][col] != 'o'))
    {
        board[row][col] = 'o';
        player = 'x';
    }
    else
    {
        fix_mark();
    }

}

//set condition for win, draw or ongoing

bool status_game()
{
    int i, j;
    for (i = 0; i < 3; i)
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
    return false;
        
}
    
