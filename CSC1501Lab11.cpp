//==========================================================
//
// Title:      CSC 1501 - Assignment 11 - Hamming Transmitter   
// Course:     CSC 1501
// Lab Number: Lab 10
// Author:     Mizanul Haque
// Date:      3/01/2921
// Description:
//   This application has the program which using a seven digit binary input, finds any input errors using the Hamming Code 
// Transmitter method. Using the Hamming Code receiver method, the inputs are applied to find any errors and show which specific errors
// are present. A message is transmitted from the code 
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

// Global Constants

const int array_sizea = 8;
const int array_sizeb = 7;

// void transmitter to commit function
void Trasmitter(bool arrA[array_sizea], bool arrB[array_sizeb])
{
    // bool variables 
    bool a, b, c; 

    // function to compute transmittion
    a = ((arrA[4] + arrA[5] + arrA[7]) % 2);
    b = ((arrA[4] + arrA[6] + arrA[7]) % 2);
    c = ((arrA[5] + arrA[6] + arrA[7]) % 2);

    cout << "Message: ";
    for (int i = 0; i < array_sizea; i++)
    {
        cout << arrA[i] << " ";
    }

    // Hold array values
    arrB[0] = a;
    arrB[1] = b;
    arrB[2] = arrA[4];
    arrB[3] = c;
    arrB[4] = arrA[5];
    arrB[5] = arrA[6];
    arrB[6] = arrA[7];

    //output hamming transmitter
    cout << "\n Hamming Code: ";
    for (int i = 0; i < array_sizeb; i++)
    {
        cout << arrB[i] << " ";
    }
}

void decimal_convert(int d, bool arrA[array_sizea])
{
    int rem;
    int div = 2;
    for (int i = array_sizea - 1; i >= 0; i--) // for loop to do decimal conversion
    {
        // functions to get raminder, divide functions, and then storing remainder
        rem = d % div; 
        d = d / div; 
        arrA[i] = rem; 
    }
}



int main() {
    //Declare variables
    int input;

    bool array_Result[array_sizea];
    bool array_transmitter[array_sizeb];

    string option;

    // Show application header
    cout << "Welcome to Hamming Code Transmitter!" << endl;
    cout << "--------------------------" << endl << endl;

  

    // Write to screen
    cout << "Enter y to continue n to stop (y/n)? ";
    cin >> option;

    // while option function to continue repeating function with y string or ending it with n string
    while (option == "y")
    {

        // Prompt User input
        for (int i = 0; i < 5; i++)
        {
            cout << "\nDecimal: ";
            cin >> input;

            // Function to convert decimal, tramsmitter
            decimal_convert(input, array_Result); 
            Trasmitter(array_Result, array_transmitter);
            cout << endl;



        }
        // ask user if they want to enter another input
        cout << "\nEnter another set of inputs (y/n)? ";
        cin >> option;



    }

    // End of Application
    cout << "End of Hamming Code Receiver ";
}