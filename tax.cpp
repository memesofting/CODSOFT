#include <iostream>

/**
 * main - Entry point fir tax calculator
 *
 * Return: 0 on success
 */

using namespace std;

int main()
{
	cout << "This program calculates state and county taxes in dollars\n";
	double sales = 95000;
	double state_tax_rate = 0.04;
	double county_tax_rate = 0.02;

	double state_tax = sales * state_tax_rate;
	double county_tax = sales * county_tax_rate;
	double total_tax = state_tax + county_tax;

	cout << "state tax = $" << state_tax << endl;
	cout << "county tax = $" << county_tax << endl;
	cout << "total tax = $" <<  total_tax << endl;

	return 0;
}
