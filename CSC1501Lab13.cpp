//==========================================================
//
// Title:      CSC 1501 - Assignment 13 - Hamming Receiver   
// Course:     CSC 1501
// Lab Number: Lab 10
// Author:     Mizanul Haque
// Date:      3/01/2921
// Description:
//   This application uses matrixes to multiply matrixes given to it by the user. It primarily utilizes multi-dimensional arrays.
// Using multidimensional arrays it performs it. To do this it utilizes the operations of 
// (1)  Matrix A * Matrix B(2) Matrix B * Matrix A(3) Matrix C * Matrix B(4) 2 * Matrix A(5) -4 * Matrix B
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



// Void functions to do perform operations on matrices

// void function for multiplication
void mat_mult(int matrix1[][2], int matrix2[][2])
{
    int total[2][2] = {};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; ++k)
            {
                total[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << total[i][j] << " ";
        }
        cout << "" << endl;
    }

}

// Scaalr multiplication to multiply matrices with number
void scalar_multiply(int matrix[][2], int num)
{
    int total[2][2] = {};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            total[i][j] = num * matrix[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << total[i][j] << " ";
        }
        cout << "" << endl;
    }

}

// Int main
int main()
{
    // Matrix Array
    int mat_a[2][2] = { 2,0,4,2 };
    int mat_b[2][2] = { 1,3,2,0 };
    int mat_c[2][2] = { 1,0,0,1 };

    
    cout << "Welcome to Matrix Multiplication" << endl;
    cout << "-----------------------------------" << endl;

    // Question One
    cout << "Question (1) Matrix A * Matrix B = " << endl;
    mat_mult(mat_a, mat_b);
    cout << endl;

    // Question Two
    cout << "Question (2) Matrix B * Matrix C : " << endl;
    mat_mult(mat_b, mat_c);
    cout << endl;

    // Question Three
   cout << "Question (3) Matrix C * Matrix B : " << endl;
    mat_mult(mat_c, mat_b);
    cout << endl;

    // Question Four
    cout << "Question (4) 2 * Matrix  A : " << endl;
    scalar_multiply(mat_a, 2);
    cout << endl;

    // Question Five
    cout << "Question (5) -4 * Matrix B : " << endl;
    scalar_multiply(mat_b, -4);
    cout << endl;


    // End of Application
    cout << "End of Application " << endl;

}