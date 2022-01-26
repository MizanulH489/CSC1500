//==========================================================
//
// Title:      CSC 1501 - Assignment 14 - The Heap Sorter 
// Course:     CSC 1501
// Lab Number: Lab 14
// Author:     Mizanul Haque
// Date:      4/12/2921
// Description:
//   This application is a heap sorting program. Following a set of inputs by the user, the program utilizes max heaping to resort and
// organize the numbers according to their numerical order.
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

// void heap function conduct the heap sorting
void heap_f(int f_heap[], int p, int m)
{
    int sort = m;

    // function to perform sorting 
    int left = 2 * m + 1;
    int right = 2 * m + 2;

    // If function to ensure input is less than heap sort , or largest digit
    if (left < p && f_heap[left] > f_heap[sort])
        sort = left;

    // iF FUNCTION TO CHECK IF heap function is less than largest
    if (right < p && f_heap[right] > f_heap[sort])
        sort = right;

    // If function to check if largest function is root
    if (sort != m) {
        swap(f_heap[m], f_heap[sort]); //swap function

        heap_f(f_heap, p, sort);
    }
}

// void function to conduct heap sort
void heap_Sort(int heap[], int p)
{
    for (int i = p / 2 - 1; i >= 0; i--)
        heap_f(heap, p, i);
    for (int i = p - 1; i >= 0; i--)
    {
        swap(heap[0], heap[i]); 
        heap_f(heap, i, 0); // function call 
    }
}


int main()
{
    // Show Array
    int f_heap[7];

    string option;

    // Show application header
    cout << "Welcome to Decoder Program!" << endl;
    cout << "---------------------" << endl;


    // Write to screen
    cout << "Enter y to continue n to stop (y/n)? ";
    cin >> option;



    while (option == "y")
    {

        cout << "Enter array elements :\n";
        for (int i = 0; i < 7; ++i)
            cin >> f_heap[i]; //read input from user

        heap_Sort(f_heap, 7); //function call

        cout << "\nArray after Heap Sort: \n";
        for (int i = 0; i < 7; ++i) //Print array after sorting
            cout << f_heap[i] << " ";
        cout << endl;

        cout << "\nEnter another set of inputs (y/n)? ";
        cin >> option;


    }
}