#include <iostream>

/**
 * main: entry point for simple calculator
 * Return: 0 on success
 */
using namespace std;

int main()
{
	char operation;
	double a;
	double b;

	cout << "What arithmethic operation would you like to perform" << endl;
	cout << "Enter 'a' for addition\n";
	cout << "'s' for subtraction\n";
	cout << "'d' for division\n";
	cout << "'m' for multiplication\n";
	cin >> operation;
	if (operation = 'd')
	{
		cout << "Enter numerator\n";
		cin >> a;
		cout << "Enter denominator\n";
		cin >> b;
		cout << a + "divided by" + b + " = "<< divide(a, b) << endl;
	}
	else
	{
		cout << "Enter first number\n";
		cin >> a;
		cout << "Enter second number\n";
		cin >> b;
	}
	return 0;
}

int add(int x, int y)
{
	return (x + y);
}

int sub(int x, int y)
{
	return (x - y);
}

int mul(int x, int y)
{
	return (x * y);
}

double divide(double x, double y)
{
	return (x / y);
}
