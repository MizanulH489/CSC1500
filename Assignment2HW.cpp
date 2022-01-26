//==========================================================
//
// Title:      CSC 1501 - Assignment 1 - Truth Tables
// Course:     CSC 1501
// Lab Number: Assignment 1
// Author:     Mizanul Haque
// Date:      1/11/2921
// Description:
//  C++ Program is the code template for CSC 1501. This truth table produces
// different possible combinations of the three variables from the list, and providing 
// results for each possible solution.
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
	int i = 0;
     int countert = 0;

	int arrayA[8] = { 0, 0, 0, 0, 1, 1, 1, 1 };

	int arrayB[8] = { 0, 0, 1, 1, 0, 0, 1, 1 };

	int arrayC[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
  

  // Show application header
  cout << "Welcome to Truth Tables!" << endl;
  cout << "--------------------------" << endl << endl;


      // While Loops to find true statements for  A, B, C
                  // First Logical Statement
  while (i < 8)
  {
	  if ((arrayA[i] and arrayB[i]) or (arrayA[i] and arrayC[i]))
	  {
		  cout << "(A and B) or (A and C) is true for A=" << arrayA[i] << " B=" << arrayB[i] << " C=" << arrayC[i] << endl;
		  countert++;
	  }

	  else
		  cout << "(A and B) or (A and C) is false for A=" << arrayA[i] << " B=" << arrayB[i] << " C=" << arrayC[i] << endl; 

		  i++;


  }
  cout << endl;
  
                               // Second Logical Statement 
  if(countert == 0)
	  cout << "(A and B) or (A and C) is false for all combinations of values of A,B and C";
      i = 0;
      countert = 0;

  while (i < 8)
  {
	  if ((arrayA[i] and arrayC[i]) and (arrayB[i] and (not(arrayC[i]))))
	  {
		  cout << "(A and C) and (B and !C) is true for A=" << arrayA[i] << " B=" << arrayB[i] << " C=" << arrayC[i] << endl;
		  countert++;
	  }


	 
          cout<<"(A and C) and (B and !C) is false for A="<<arrayA[i]<<" B="<< arrayB[i]<<" C="<< arrayC[i]<<endl; 
	    i++;


  }
  cout << endl;


  if (countert == 0)
    i = 0;
    countert = 0;
	

	                          // Third Logical Statement
  while (i < 8)
  {
	  if ((arrayA[i] or arrayB[i]) and not((arrayB[i] or arrayC[i])))
	  {
		  cout << "(A or B) and !(B or C) is true for A=" << arrayA[i] << " B=" << arrayB[i] << " C=" << arrayC[i] << endl;
		  countert++;
	  }

	  

	  cout<<"(A or B) and !(B or C) is false for A="<< arrayA[i]<<" B="<< arrayB[i]<<" C="<< arrayC[i]<<endl; 
	  i++;

  }
  cout << endl;


  if (countert == 0)
	  cout << "(A or B) and !(B or C) is false for all combinations of values of A,B and C\n";
  i = 0;
  countert = 0;

                     // Fourth Logical Statement
  while (i < 8)
  {
	  if ((arrayA[i] || (arrayB[i] && arrayC[i])) and ((not arrayA[i]) and not(arrayB[i])))
	  {
		  cout << "(A or (B and C)) and (!A and !B) is true for A=" << arrayA [i] << " B=" << arrayB[i] << " C=" << arrayC[i] << endl;
		  countert++;
	  }

	  
		   cout<<"(A or (B and C)) and (!A and !B) is false for A="<< arrayA[i]<<" B="<< arrayB[i]<<" C="<< arrayC[i]<< endl; 
	  i++;
  }
  cout << endl;
   
  if (countert == 0)
	  
  i = 0;
  countert = 0;

 
          // Fifth Logical Statement
  while (i < 8)
  {
	  if (((arrayB[i] and arrayC[i]) or (arrayC[i] and arrayA[i])) and (not(arrayA[i] or arrayB[i]) and arrayC[i]))
	  {
		  cout << "((B and C) or (C and A)) and (!(A or B) and C) is true for A=" << arrayA[i] << " B=" << arrayB[i] << " C=" << arrayC[i] << endl;
		  countert++;
	  }

	  
	      cout<<"((B and C) or (C and A)) and (!(A or B) and C) is false for A="<< arrayA[i]<<" B="<< arrayB[i]<<" C="<< arrayC[i] <<endl; 
	  i++;
  }









  // Show application close
  cout << "\nEnd of Truth Tables! " << endl;

  }
