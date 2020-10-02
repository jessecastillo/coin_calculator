// CoinCalculator.cpp
// Last edited by Jesse Castill on 9/20/2020
// CS 231- Computer Programming 1
// Coin Calculator for determining the value of coins submitted by the user.
// Due date is 09/20/2020

#include <iostream>
using namespace std;

int main()
{
	// Welcome message and setting variables
	cout << "Welcome to the coin calculator! Let us begin!" << endl;
	
	float penny = 0.01;
	int penny_quantity = 0;
	float nickel = 0.05;
	int nickel_quantity = 0;
	float dime = 0.1;
	int dime_quantity = 0;
	float quarter = 0.25;
	int quarter_quantity = 0;
	float half_dollar = 0.05;
	int half_dollar_quantity = 0;
	float one_dollar = 1.00;
	int one_dollar_quantity = 0;

	// User input of the quantity of coins, validating that the integer is positive
	while (cout << "Please enter the number of pennies in an amount greater than or equal to zero: " &&
		(!(cin >> penny_quantity) || penny_quantity < 0))
	{
		cout << "The amount was not equal to or greater than zero.\n";
		cin.clear();
	}
	
	while (cout << "Please enter the number of nickels in an amount greater than or equal to zero: " &&
		(!(cin >> nickel_quantity) || nickel_quantity < 0))
	{
		cout << "The amount was not equal to or greater than zero.\n";
		cin.clear();
	}
	
	while (cout << "Please enter the number of dimes in an amount greater than or equal to zero: " &&
		(!(cin >> dime_quantity) || dime_quantity < 0))
	{
		cout << "The amount was not equal to or greater than zero.\n";
		cin.clear();
	}
	
	while (cout << "Please enter the number of quarters in an amount greater than or equal to zero: " &&
		(!(cin >> quarter_quantity) || quarter_quantity < 0))
	{
		cout << "The amount was not equal to or greater than zero.\n";
		cin.clear();
	}

	while (cout << "Please enter the number of half-dollar coins in an amount greater than or equal to zero: " &&
		(!(cin >> half_dollar_quantity) || half_dollar_quantity < 0))
	{
		cout << "The amount was not equal to or greater than zero.\n";
		cin.clear();
	}

	while (cout << "Please enter the number of one-dollar coins in an amount greater than or equal to zero: " &&
		(!(cin >> one_dollar_quantity) || one_dollar_quantity < 0))
	{
		cout << "The amount was not equal to or greater than zero.\n";
		cin.clear();
	}
	
	// The variables are read back to the user and the total sum of coins is calculated
	cout << "You have " << penny_quantity << " pennies." << endl;
	cout << "You have " << nickel_quantity << " nickels." << endl;
	cout << "You have " << dime_quantity << " dimes." << endl;
	cout << "You have " << quarter_quantity << " quarters." << endl;
	cout << "You have " << half_dollar_quantity << " half-dollars." << endl;
	cout << "You have " << one_dollar_quantity << " one-dollar coins." << endl;

	// Final tally and salutations
	float total = penny_quantity * penny + nickel_quantity * nickel + dime_quantity * dime + quarter_quantity * quarter + half_dollar_quantity * half_dollar + one_dollar_quantity * one_dollar;
	cout << "Excellant! So, the total value of your coins is: $" << total << "! Please come back if you need more calculations!" << endl;


}
