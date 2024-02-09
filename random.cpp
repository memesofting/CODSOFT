#include <iostream>
#include <ctime>
#include <cstdlib>

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
		cout << "number is: " << rand_num << endl;
		cout << "your guess is: " << guess << endl;
		cout << "Try again\n";
		goto Here;
	}
	else
	{
		cout << "Nice one\n";
	}

	return 0;
}
