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
		//cout << "Enter first number\n";
		//cin >> a;
		//cout << "Enter second number\n";
		//cin >> b;
		//result = a + b;
		result = add(a, b);
	}
	else if (operation == 's')
	{
		cout << "Enter first number\n";
		cin >> a;
		cout << "Enter second number\n";
		cin >> b;
		result = a - b;
	}
	else if (operation == 'm')
	{
		cout << "Enter first number\n";
		cin >> a;
		cout << "Enter second number\n";
		cin >> b;
		result = a * b;
	}
	else if (operation == 'd')
	{
		cout << "Enter numerator\n";
		cin >> a;
		cout << "Enter denominator\n";
		cin >> b;
		result = a / b;
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

void sub(int x, int y)
{
	int result;

	cout << "Enter first number\n";
	cin >> x;
	cout << "Enter second number\n";
	cin >> y;
	result = x - y;
	return result;
}

void mul(int x, int y)
{
	int result;
	cout << "Enter first number\n";
	cin >> x;
	cout << "Enter second number\n";
	cin >> y;
	result = x * y;
	return result;
}

void divide(double x, double y)
{
	double result;
	cout << "Enter numerator\n";
	cin >> x;
	cout << "Enter denominator\n";
	cin >> y;
	result = x / y;
	return result;
}
