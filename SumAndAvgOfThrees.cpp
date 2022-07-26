// SumAndAvgOfThrees.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Write a program to find the “Sum” and “Average” of “three” numbers. 
// Provide a hint to the user, take the input and return some output results to show the user the calculations for their three numbers.

#include <iostream>
#include <string>

using namespace std;
int main()
{
    int a, b, c;
    
    
    //ask for 3 numbers
    cout << " Enter 3 numbers! " << endl;
    cout << "First number: ";
        cin >> a;
        cout << "Second number: ";
        cin >> b;
        cout << "Third number: ";
        cin >> c;
    

    // Add 3 numbers 
    int sum = a + b + c;

    // Find average of 3 numbers
    float average = (a + b + c) / 3.0f;

        // Provide sum and average to user
        cout << " The sum of your 3 numbers is " << sum << endl;
       cout << " The average is " << average << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
