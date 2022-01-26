//==========================================================
//
// Title:      CSC 1501 - Assignment 12 - Blackjack 
// Course:     CSC 1501
// Lab Number: Lab 10
// Author:     Mizanul Haque
// Date:      3/01/2921
// Description:
//   This application is a blackjack program. It contains a single suit of cards. This program will inform the user of the chance and
// odds of getting a beneficial or detrimental card
// 
// 
//
//
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	// Declare variables
	int c_toal = 0;
	int total_deal = 0;

	string option; // string option for user to input

	bool valid = true; // bool valid if input is given, resulting in true

	// Declare arrays
	int arr_hand[10]; // Array for Holding cards
	int arra_deal[10]; // Array for dealing cards

	// rand num generator function
	srand(time(0));
	


	// Show application header
	cout << "Welcome to BlackJack Program!" << endl;
	cout << "---------------------" << endl;

	//Card generator function
	for (int i = 0; i < 2; i++)
	{
		arr_hand[i] = rand() % (10) + 1;
		arra_deal[i] = rand() % (10) + 1;
	}


	// Compute total for cards in hand
	c_toal = arr_hand[0] + arr_hand[1];
	total_deal = arra_deal[0] + arra_deal[1];
	int j = 2;

	while (valid)
	{
		// Printing user and dealer hand
		cout << "\nHand: ";
		for (int i = 0; i < j + 1; i++)
		{
			if (arr_hand[i] > 0)
			{
				cout << arr_hand[i] << " ";
			}
		}
		cout << "Dealer: " << arra_deal[0];


		// Function to show user possibilities for getting good/bad card
		int bad = 0, good = 0;
		if (c_toal > 10)
		{
			good = 21 - c_toal;
		}
		else
		{
			good = 10;
		}

		bad = 10 - good;

		// Displaying probabilty
		cout << "\nThe probability of getting a detrimental card is "
			<< bad << "/" << 10 << endl;

		cout << "The probability of getting a good card is "
			<< good << "/" << 10 << endl;

		// Take user input for new card
		cout << "\nHit or Stand? ";
		cin >> option;

		// Function to produce card
		if (option == "hit" || option == "Hit")
		{
			arr_hand[j] = rand() % (10) + 1;
			if (total_deal < 17)
			{
				arra_deal[j] = rand() % (10) + 1;
				total_deal = total_deal + arra_deal[j];
			}

			c_toal = c_toal + arr_hand[j];

		}
		else
		{
			valid = false; // valud function if false
		}

		if (c_toal > 21 || total_deal > 21 || total_deal < 0)
		{
			valid = false; // valid funtion if false
		}

		j++;
	}

	// Final hand
	cout << "\nFinal Hand: ";
	for (int i = 0; i < j + 1; i++)
	{
		if (arr_hand[i] > 0)
		{
			cout << arr_hand[i] << " ";
		}
	}
	// Final dealer
	cout << "Final Dealer: ";
	for (int i = 0; i < j + 1; i++)
	{
		if (arra_deal[i] > 0)
		{
			cout << arra_deal[i] << " ";
		}

	}
	cout << endl << "\t\t" << c_toal << "\t\t " << total_deal << endl;

	// If function to show if user is winner or loser
	if (c_toal > 21)
	{
		cout << "\nBust ~ You lost!" << endl;
	}
	else if (total_deal > 21)
	{
		cout << "\nBackjack ~ You win!" << endl;
	}
	else if (c_toal > total_deal)
	{
		cout << "\nBackjack - You win!" << endl;
	}
	else
	{
		cout << "\nBust - You lost!" << endl;
	}


	

}