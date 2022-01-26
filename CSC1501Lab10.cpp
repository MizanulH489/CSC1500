//==========================================================
//
// Title:      CSC 1501 - Assignment 10 - Hamming Receiver   
// Course:     CSC 1501
// Lab Number: Lab 10
// Author:     Mizanul Haque
// Date:      3/01/2921
// Description:
//   This application has the program which using a seven digit binary input, finds any input errors using the Hamming Code 
// receiver method. Using the Hamming Code receiver method, the inputs are applied to find any errors and show which specific errors
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


int main() {

    //Declare variables
    int arrayC[10];

    int C, C1, C2, C3;
    int i;
    int error_point = 0;
    int flag = false;

    string option;

    // Show application header
    cout << "Welcome to Hamming Code Program!" << endl;
    cout << "--------------------------" << endl << endl;

    // Write to screen
    cout << "Enter y to continue n to stop (y/n)? ";
    cin >> option;

    // while option function to continue repeating function with y string or ending it with n string
    while (option == "y")
    {

        // Prompt User to enter hamming code values
        cout << "Enter values to check for a error:\n"; 
        for (i = 0; i < 7; i++)
            cin >> arrayC[i];


        for (i = 0; i < 7; i++)
            cout << arrayC[i];

        C1 = arrayC[6] ^ arrayC[4] ^ arrayC[2] ^ arrayC[0];
        C2 = arrayC[5] ^ arrayC[4] ^ arrayC[1] ^ arrayC[0];
        C3 = arrayC[3] ^ arrayC[2] ^ arrayC[1] ^ arrayC[0];
        C = C3 * 4 + C2 * 2 + C1;

          // Print to screen if user entered input is correct
        if (C == 0) {
            cout << "\nYour Code is Correct.";
        }
        else {
            if (C - 6 < 0) {
                error_point = 7;
                flag = true;
            }
            else {
                error_point = C - 6;
            }
            cout << "\n Code has an incorrect bit at: " << error_point;
            cout << "\nThe Correct Hamming Code is:";

            // icheck for errors 
            if (flag) {
                if (arrayC[error_point - 1] == 0)
                    arrayC[error_point - 1] = 1;
                else
                    arrayC[error_point - 1] = 0;
                flag = false;
            }
            else {
                if (arrayC[7 - C] == 0)
                    arrayC[7 - C] = 1;
                else
                    arrayC[7 - C] = 0;
            }
            for (i = 0; i < 7; i++) {
                cout << arrayC[i];
            }
        }
        cout << "\n";
        cout << "The Decimal number value: " << (arrayC[2] << 3) + (arrayC[4] << 2) + (arrayC[5] << 1) + arrayC[6] << "\n";

        


        cout << "\nEnter another set of inputs (y/n)? ";
        cin >> option;


    }

    // End of Application
    cout << "End of Hamming Code Receiver ";
}