//==========================================================
//
// Title:      CSC 1501 - Assignment 1 - Truth Tables
// Course:     CSC 1501
// Lab Number: Assignment 1
// Author:     Mizanul Haque
// Date:      1/11/2921
// Description:
//   This truth table produces different possible combinations of the three variables from the list, and providing 
// results for each possible solution. This code utilizes A, B, C and tries to produce different logical combinations 
// from it.
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

void print(bool abc[8][3], bool y[8])
{
    for (int i = 0; i < 8; i++)
        cout << "\n" << abc[i][0] << "     " << abc[i][1] << "     " << abc[i][2] << "       " << y[i];
}
 

                             // Logical Statement 1
void log_stat1(bool abc[8][3])
{
    bool x[8], y[8], z;
    for (int i = 0; i < 8; i++)
    {
        x[i] = abc[i][0] || abc[i][2];
        x[i] = !x[i];
        y[i] = ((!x[i]) && abc[i][1]) || ((!abc[i][1]) && x[i]);
    }
    cout << "A     B     C     (A nor C) xor B";
    print(abc, y);  // Print Results received
}

                       // Logical Statement 2
void log_stat2(bool abc[8][3])
{
    bool x[8], y[8], z[8];
    for (int i = 0; i < 8; i++)
    {
        y[i] = !(abc[i][0] || abc[i][1]);
        x[i] = (!(abc[i][1])) || abc[i][2];
        z[i] = !(x[i] && y[i]);

    }

    cout << "\n\n\nA     B     C     (B -> C)nand (A nor B)";
    print(abc, z); // Print Results received
}


                        // Logical Statement 3
void log_stat3(bool abc[8][3])
{
    bool x[8], y[8], z[8];
    for (int i = 0; i < 8; i++)
    {
        x[i] = ((!(abc[i][0])) && abc[i][1]) || ((!(abc[i][1])) && abc[i][0]);
        y[i] = ((!(abc[i][1])) && (!(abc[i][2]))) || (abc[i][1] && abc[i][2]);
        z[i] = (!x[i]) || y[i];

    }
    cout << "\n\n\nA     B     C     (A xor B) -> (B xnor C)";
    print(abc, z);           // Print Results received
}


                                   // Logical Statement 4
void log_stat4(bool abc[8][3])
{
    bool x[8], y[8], z[8];
    for (int i = 0; i < 8; i++)
    {
        y[i] = !abc[i][2];
        x[i] = (!abc[i][0]) || abc[i][1];
        z[i] = (!x[i]) || y[i];
    }
    cout << "\n\n\nA     B     C     (A->B)-> !C";
    print(abc, z);          // Print Results received

}


int main()

{
    // Show application header
    cout << "Welcome to Truth Tables but worse!" << endl;
    cout << "--------------------------" << endl << endl;

                 // Array statement to hold all values 
    bool abc[8][3] = { {0,0,0},
        {0,0,1},
        {0,1,0} ,
        {0,1,1},
        {1,0,0},
        {1,0,1},
        {1,1,0},
        {1,1,1} 
              };


         // Function to print all values to screen
    log_stat1(abc);
    log_stat2(abc);
    log_stat3(abc);
    log_stat4(abc);
    cout << endl;



    // Show application close
    cout << "\nEnd of Truth Tables! " << endl;

}



