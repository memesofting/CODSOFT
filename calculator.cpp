#include <iostream>
#include "main.h"

using namespace std;

/**
 * main - entry point for simple calculator
 * takes two numbers and askes user for operation to be done
 * displays result to stdout
 *
 * Return: 0 on success
 */
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

/**
 * add - adds two numbers
 * @x: first number
 * @y: second number
 * Return: result on success
 */
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

/**
 * sub - performs substraction on two numbers
 * @x: first number
 * @y: second number
 * Return: result on success
 */
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

/**
 * mul - multiplies two numbers
 * @x: first number
 * @y: second number
 * Return: result on success
 */
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

/**
 * divide - divides two numbers
 * @x: numerator
 * @y: denomninator
 * Return: result on success
 */
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
