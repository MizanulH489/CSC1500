//==========================================================
//
// Title:      CSC 1501 - Assignment 7 – Bubble Sorter 
// Course:     CSC 1501
// Lab Number: Lab 7
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

// Function declaration for Global Variables
// int sort to store arr and size, and void displayArr contain int arr and int size
int sort(int *arr, int size);
void displayArr(int arr[], int size);

// Sorts an array using bubble sort in it's exact order
int sort(int* arr, int size)
{
    int action = 0;

    // Sort
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < (size - i); j++)
        {
            // Compare
            action += 1;
            if (arr[j - 1] > arr[j])
            {
                // Swap
                action += 3;
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return action;
}

// Displays the array
void displayArr(int arr[], int size)
{
    // Function to display array list
    cout << "(" << arr[0];
    for (int i = 1; i < size; i++)
    {

        cout << "," << arr[i];
    }
    cout << ")";
}



int main()
{
    // Array declaration
    int array_1[10] = { 1, 3, 7, 5, 2, 4, 6, 8, 9, 10 };
    int array_2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int array_3[10] = { 1, 10, 2, 9, 3, 8, 4, 7, 5, 6 };

    // Declare Variables 
    int size = 0;
    int acct = 0;



    // Show application header
    cout << "Welcome to Bubble Sorter!" << endl;
    cout << "--------------------------" << endl << endl;



    // Display Array1

    size = sizeof(array_1) / sizeof(int); // size of array represented 
    cout << "Array1: ";
    displayArr(array_1, size); //display array with its array size
    cout << endl;

    // Sort Array1

    acct = sort(array_1, size); // sort array size
    cout << "Sorted Arrays: ";
    displayArr(array_1, size); //display array with its array size and sort it
    cout << endl;
    cout << " " << acct << " Total Number of Actions Performed." << endl;
    cout << endl;

    // Display Array2

    size = sizeof(array_2) / sizeof(int); // size of array represented 
    cout << "Array2: ";
    displayArr(array_2, size); //display array with its array size
    cout << endl;

    // Sort Array2

    acct = sort(array_2, size); // sort array 
    cout << "Sorted Arrays: ";
    displayArr(array_2, size); //display array with its array size and sort it
    cout << endl;
    cout << " " << acct << " Total Number of Actions Performed." << endl;
    cout << endl;


    // Display Array3

    size = sizeof(array_3) / sizeof(int); // size of array represented 
    cout << "Array3 ";
    displayArr(array_3, size); //display array with its array size
    cout << endl;

    // Sort Array3

    acct = sort(array_3, size); // sort array size
    cout << "Sorted Arrays: ";
    displayArr(array_3, size); //display array with its array size and sort it
    cout << endl;
    cout << " " << acct << " Total Number of Actions Performed." << endl;
    cout << endl;

  


	//Show Application Close
	cout << "\nEnd of Bubble Sorter!  " << endl;


}

		
	

