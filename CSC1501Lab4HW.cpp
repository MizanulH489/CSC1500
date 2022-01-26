//==========================================================
//
// Title:      CSC 1501 - Assignment 4-The vALIDATOR
// Course:     CSC 1501
// Lab Number: Assignment 4
// Author:     Mizanul Haque
// Date:      1/31/2921
// Description:
//   This application tests the validity of the propositional logical statements it was given. It utilizes the operator implies,
// as well as the variables of rocket, astroronaut, trained, and educated.
//
// 
//
// 
//
//=================================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"



 // Void function to set up the implies function 
void implies(int arrA[16], int arrB[16], int arrC[16])
{
	for (int i = 0; i < 16; i++)
	{
		if ((!arrA[i] || arrB[i]) == true)
		{
			arrC[i] = 1;
		}
		else
		{
			arrC[i] = 0;
		}
	}
};

int main()
{
	// Declare constants
	const int COLMFT1 = 12;
	const int COLMFIT2 = 5;

	// Declare Variable
	int val;

	// Array Function
	int arrayA[16] = { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1 }; // array for rocket
	int arrayB[16] = { 0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1 }; // array for astronaut
	int arrayC[16] = { 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1 }; // array for trained
	int arrayD[16] = { 0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1 }; // array for educated

	// Store results of logical statements in arrays
	int array_logicA[16];
	int array_logicB[16];
	int array_logicC[16];

	int arrayConclusion[16];
	

	// Compute Propisitions:
	implies(arrayA, arrayB, array_logicA); // rocket implies astronaut
	implies(arrayB, arrayC, array_logicB); // astronaut implies trained
	implies(arrayC, arrayD, array_logicC); // trained implies educated

	// Impute function for education -> rocket
	implies(arrayD, arrayA, arrayConclusion);// educated implies rocket

	// Application header
	cout << "Welcome to The Validation Program !" << endl;
	cout << "-------------------------" << endl;

	// Print output of arrays for all logical statements
	cout << setw(COLMFT1) << left << "Rocket" << setw(COLMFT1) << left << "Astronaut";
	cout << setw(COLMFT1) << left << "Trained" << setw(COLMFT1) << left << "Educated ";
	cout << setw(COLMFT1) << left << " R -> A" << setw(COLMFT1) << left << "A -> T";
	cout << setw(COLMFT1) << left << "T -> E" << setw(COLMFT1) << left << "E -> R" << endl;



	for (int i = 0; i < 16; i++)
	{
		cout << setw(COLMFT1) << left << arrayA[i] << setw(COLMFT1) << left << arrayB[i];
		cout << setw(COLMFT1) << left << arrayC[i] << setw(COLMFT1) << left << arrayD[i];
		cout << setw(COLMFT1) << left << array_logicA[i] << setw(COLMFT1) << left << array_logicB[i];
		cout << setw(COLMFT1) << left << array_logicC[i] << setw(COLMFT1) << left << arrayConclusion[i];
		cout << setw(COLMFT1) << left;

		// Function to show any invalid
		if (((array_logicA[i] && array_logicB[i] && array_logicC[i]) == 1) & (arrayConclusion[i] == 0))
		{
			cout << "Invalid" << endl;
			val = 0;
		}
		cout << endl;
	}

	// Show whether statement is valid or not
	if (val == 0)
	{
		cout << "\n\nThe logical statement is invalid!" << endl;
	}
	else
	{
		cout << "\n\nThe logical statement is valid!" << endl;
	}

	// End of Application
	cout << "\nEnd of The Validator Program " << endl;
};

