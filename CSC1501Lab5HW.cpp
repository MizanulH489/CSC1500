//==========================================================
//
// Title:      CSC 1501 - Assignment 5 - Base Converter 
// Course:     CSC 1501
// Lab Number: Lab 5
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






// recursive function to compute Number to any base
void convert(int Num, int base)
{
	// Return value if num equals 0
	if (Num == 0)
		return;
	// Function to compute number
	int rem = Num % base;
	Num /= base;
	
	if (rem < 0)
		Num += 1;
	// recursive call to convert function
	convert(Num, base);
	
	// function if remainder is added to base *1
	if (rem < 0)
		cout << rem + (base * -1);
	else
		cout << rem;
	return;
}



int main()
{
	// Declare Variables
	int Num;
	int base;
	string option;

	// Show application header
	cout << "Welcome to Base Converter!" << endl;
	cout << "--------------------------" << endl << endl;

	// Write to screen
	cout << "Enter y to continue n to stop (y/n)? ";
	cin >> option;


	while (option == "y")
	{
	
		cout << "-----------------------------------------" << endl;


		cout << "Enter number in decimal base: ";
		cin >> Num;
		cout << "Enter base to convert: ";
		cin >> base;
		if (Num <= 0)
		{
			cout << "0\n";
			return 0;
		}
		// Convert function using Number with base assigned
		convert(Num, base);
		cout << "\n";
		



		



		cout << "\nEnter another set of inputs (y/n)? ";
		cin >> option;



	}

	
	




	//Show Application Close
	cout << "\nEnd of Base Converter !  " << endl;


}

		
	

