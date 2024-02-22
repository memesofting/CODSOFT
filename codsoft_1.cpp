#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
/**
 * main - generates a random number to be guessed by user
 *
 * Return: 0 on success
 */

int main()
{
	int rand_num;
	int guess;

	const short max = 9;
	const short min = 0;
	srand(time(0));
	
	rand_num = (rand() % (max - min + 1)) + min;
	cout << "Hello !!!, it's GUESS THE NUMBER time !!! :)\n";
	cout << "Guess the number from 0 - 9 ";
Here:
	cin >> guess;
	if (guess != rand_num)
	{
		if (guess < rand_num)
		{
			cout << "Your guess is too low :(" << endl;
			cout << "Try again\n";
		}
		else
		{
			cout << "Your guess is too high :(" << endl;
			cout << "Try again\n";
		}
		goto Here;
	}
	else
	{
		cout << "Your guess is right :)!!!" << endl;
		cout << "You are the best\n";
	}

	return 0;
}
