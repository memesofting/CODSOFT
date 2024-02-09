#include <iostream>
#include <ctime>
#include <cstdlib>

/**
 * main - generates a random number to be guessed by user
 *
 * Return: 0 on success
 */

using namespace std;

int main()
{
	int rand_num;
	int guess;

	const short max = 9;
	const short min = 0;
	//time(0) is time elasped in sec from 1970
	srand(time(0));
Here:
	rand_num = (rand() % (max - min + 1)) + min;
	cout << "Guess the number";
	//cout << rand_num;
	cin >> guess;
	//cout << endl;
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
