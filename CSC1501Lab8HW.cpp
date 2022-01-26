//==========================================================
//
// Title:      CSC 1501 - Assignment 8 - Base 
// Course:     CSC 1501
// Lab Number: Lab 8
// Author:     Mizanul Haque
// Date:      2/01/2921
// Description:
//   This application has the user input a set of numbers along with their bases to give a result. It uses methods to
// to produce a result derived from the number given and the base assigned to it.  
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
	// Show application header
	cout << "Welcome to Brute Force Coder !" << endl;
	cout << "--------------------------" << endl << endl;

	// Declare Variables
	string input;


	// Declare input for user to enter 
	input = "Jrypbzr gb Avtug Inyr";

    string s;

	for (int shift = 1; shift <= 26; shift++)

	{

		s = "";

		cout << shift << ": ";


		// Function to reshuffle word or phrases 
		for (std::size_t i = 0; i < input.size(); i++)

		{

			int char_to_number;

			if (isupper(input[i]))

			{

				s += char(int(input[i] + shift - 65) % 26 + 65);

			}

			else if (islower(input[i]))

			{

				s += char(int(input[i] + shift - 97) % 26 + 97);

			}

			else

			{

				s += input[i];

			}

		}

		std::cout << s << "\n";

	}


}