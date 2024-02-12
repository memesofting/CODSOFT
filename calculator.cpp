#include <iostream>
#include "main.h"
/**
 * main: entry point for simple calculator
 * Return: 0 on success
 */
using namespace std;

int main()
{
	char operation;
	double a, b, result;

	cout << "What arithmethic operation would you like to perform" << endl;
Here:
	cout << "Enter 'a' for addition\n";
	cout << "'s' for subtraction\n";
	cout << "'d' for division\n";
	cout << "'m' for multiplication\n";
	cin >> operation;

	if (operation == 'a')
	{
		result = add(a, b);
	}
	else if (operation == 's')
	{
		result = sub(a, b);
	}
	else if (operation == 'm')
	{
		result = mul(a, b);
	}
	else if (operation == 'd')
	{
		result = divide(a, b);
	}
	else
	{
		cout << "invalid entry\n";
		cout << "enter 'a', 's', 'd' or 'm'\n";
		goto Here;
	}

	cout << "Result = " << result << endl;
	return 0;
}

int add(int x, int y)
{
	int result;

	cout << "Enter first number\n";
	cin >> x;
	cout << "Enter second number\n";
	cin >> y;
	result = x + y;
	return result;
}

int sub(int x, int y)
{
	int result;

	cout << "Enter first number\n";
	cin >> x;
	cout << "Enter second number\n";
	cin >> y;
	result = x - y;
	return result;
}

int mul(int x, int y)
{
	int result;
	cout << "Enter first number\n";
	cin >> x;
	cout << "Enter second number\n";
	cin >> y;
	result = x * y;
	return result;
}

double divide(double x, double y)
{
	double result;
	cout << "Enter numerator\n";
	cin >> x;
	cout << "Enter denominator\n";
	cin >> y;
	result = x / y;
	return result;
}
