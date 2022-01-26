//==========================================================
//
// Title:      CSC 1501 - Assignment 15 - Final Flashback 
// Course:     CSC 1501
// Lab Number: Lab 15
// Author:     Mizanul Haque
// Date:      3/01/2921
// Description:
//   This application uses previous programs
// 
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
#include <string> // For string data type;
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
    char code[100], ch;
    int i;
    int decode = 10;

    // Show application header
    cout << "Welcome to Decoder Program!" << endl;
    cout << "---------------------" << endl;


    // prompt User to enter 
    cout << "\nEnter Message to decrypt: ";
    cin.getline(code, 100); // get line function for code

    //for loop function
    for (i = 0; code[i] != '\0'; ++i)
    {
        ch = code[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - decode;
            if (ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            code[i] = ch;
        }
        // else function to check for code
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - decode;
            if (ch > 'a')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            code[i] = ch;
        }
    }
    cout << "Decrypted message: " << code;
    return 0;
}


