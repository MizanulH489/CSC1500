//==========================================================
//
// Title:      CSC 1501 - Assignment 6 - Operational Counting
// Course:     CSC 1501
// Lab Number: Lab 6
// Author:     Mizanul Haque
// Date:      2/10/2021
// Description:
//   This application has the user input a integer for it to go through two different methods for it to compute. It uses this function to see 
// see how many  fewer operations than using the looping addition you will need to use. Second, you need to show a result in which 
//using the looping addition uses fewer operations than the formula.
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
		int inputx;
		int sum = 0;
		int result = 0;

		int counter = 0; 
		int numb = 0;



		// Show application header
		cout << "Welcome to Operational Counter!" << endl;
		cout << "--------------------------" << endl << endl;


		// Prompt User to enter an input
		cout << "Enter a value/input: ";
		cin >> inputx;
		cout << endl;

		int i;
		// For loop method
		for (  i = 1; i < inputx + 1; i++)
		{

			sum = sum + i;
			counter++; // counter for for loop to count up to the sum


		}

		// Print the loop method to the screen

		cout << "Looping Method" << endl;
		cout << "-----------------"  << endl;
		cout << "Number of Operations: " << counter - 1 << endl;
		cout << "Sum: " << sum << endl;
		cout << endl;


		// Formula method
		result = (inputx * (inputx + 1)) / 2; // Method formula to use to get result
		numb = 3; // Set limit to 3

		// Print the Formula method to the screen

		cout << "Formula Method" << endl;
		cout << "-----------------" << endl;
		cout << "Number of Operations: " << numb << endl;
		cout << "Sum: " << result << endl;





		//Show Application Close
		cout << "\nEnd of Operational Counter! " << endl;
		
	}
	

