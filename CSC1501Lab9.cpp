//==========================================================
//
// Title:      CSC 1501 - Assignment 9 - Set Theory  
// Course:     CSC 1501
// Lab Number: Lab 9
// Author:     Mizanul Haque
// Date:      3/01/2921
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



//Void Function with Union Function

void Union_A(int arrA[], int arrB[], int arrC[])
{
	for (int i = 0; i < 10; i++)
	{
		// Computation function
		if (arrA[i] != arrB[i]) 
		{
			// Store Answers in Array
			if (arrA[i] > 0)
			{
				arrC[i] = arrA[i]; // Stpre values of Array C into Array A if value of Array i is greater than 0
			}
			else
			{
				arrC[i] = arrB[i]; // store if array C equals to values in array B
			}
		}
	}
}



// Void function to use intersection function
void Intersection(int arrA[], int arrB[], int arrC[])
{
	// Intersection function
	for (int i = 0; i < 10; i++)
	{
		if (arrA[i] == arrB[i])  
		{
			arrC[i] = arrA[i];
		}
	}
}


 // void function for subtraction
void Subtract_Funct(int arrA[], int arrB[], int arrC[])
{
	for (int i = 0; i < 10; i++) // Subtraction Function
	{
		if (arrA[i] && arrB[i] == false)
		{
			arrC[i] = arrA[i];
		}
	}
}
 
// Void Array for Print Array functions for all Arrays
void printArray(int* arrA)
{
	for (int i = 0; i < 10; i++) // for loop
	{
		if (arrA[i] > 0)
		{
			cout << arrA[i] << " "; // Print Array with values
		}

	}
}

// Void function for reset Array to reset array after input of values in array
void resetArray(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}

int main()
{

	//Declare variables 
	int counter = 0;

	// Arrays holding values for array
	int arrayA[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arrayNA[10] = { 0,0,0,0,0,0,0,0,0,0 };

	int arrayB[10] = { 0,2,0,4,0,6,0,8,0,10 };
	int arrayC[10] = { 1,0,3,0,5,0,7,0,9,0 };
	int arrayD[10] = { 1,2,3,0,5,0,7,0,0,0 };

	int array1[10];
	int array2[10];
	int array3[10];

	// Application header
	cout << "Welcome to Set Theory Application" << endl;
	cout << "----------------------------------" << endl;


	//A n D
	cout << "1. A n D: ";
	Intersection(arrayA, arrayD, array1); //intersection function for array a,d,array ans1
	printArray(array1); // print array for values for  Array1
	cout << endl;

	// ( B U C ) n A
	cout << "2. ( B U C ) n A: ";
	Union_A(arrayB, arrayC, array1); // union function for array B, C with union 
	Intersection(array1, arrayA, array2); // Intersection 
	printArray(array2); //print array for values for Array 2 
	cout << endl;

	// ( B U C ) n A
	cout << "3. ( !C U C ) n A: ";
	Union_A(arrayB, arrayC, array1); // Union BC function between 
	Intersection(array1, arrayA, array2); // Intersection function 
	printArray(array2); // Print array for values for answer 2
	resetArray(array1); // Reset array for array 1
	resetArray(array2); // Reset array for array 2
	cout << endl;


	// A - D
	cout << "4. A - D: ";
	Subtract_Funct(arrayA, arrayD, array1); //Subtract function for values from Array to Array D and to give values for Array values ans1
	printArray(array1); //Print values for Array 1
	cout << endl;



	// N(!A U (C U D))
	cout << "5. N(!A U (C U D)): ";
	Union_A(arrayC, arrayD, array1); // Union between C and D function
	Union_A(arrayNA, array1, array2); // ArrayUnion between Not A and values of Array 1
	


	for (int i = 0; i < 10; i++)
	{
		if (array2[i] > 0)
		{
			counter++;
		}
	}
	cout << counter;
	resetArray(array1); //reset array values for array 1
	resetArray(array2); //reset array for values of array 2



	// D n C
	cout << "\n6. D n C: ";
	Intersection(arrayD, arrayC, array1);
	printArray(array1);
	resetArray(array1);


	// N( B n C )
	cout << "\n7. N( B n C ): ";
	Intersection(arrayB, arrayC, array1); // Intersection of array b, c and values of ans1
	counter = 0; // reset counter
	for (int i = 0; i < 10; i++)
	{
		if (array1[i] > 0)
		{
			counter++; //increment of counter to go up as array 1 value is greater than 0
		}
	} 
	cout << counter;
	resetArray(array1);



	// A U B U C U D
	cout << "\n8. A U B U C U D: ";
	Union_A(arrayA, arrayB, array1); // Union between A and B 
	Union_A(arrayC, arrayD, array2); // Union and between C and D 
	Union_A(array1, array2, array3); // Union between array array 1 and array 2 as well as array 3
	printArray(array3); // print array 3
	cout << endl<< endl;




	// End of Application 
	cout << "End of Set Theory" << endl;
}
