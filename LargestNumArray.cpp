// LargestNumArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Write a program to find and display the biggest number(element) in an array of integers. 
//Hint the size of the array is unimportant as long as there's a way to check that the number displayed is definitely the biggest number.

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float array[100];

    cout << "Enter total number of elements: ";
    cin >> n;
    cout << endl;

    // Store number entered
    for (i = 0; i < n; ++i) {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> array[i];
    }
    
    //Loop to store the largest number to array[0]
    for (i = 1; i < n; ++i) {

        // change < to > if you want to find the smallest element
        if (array[0] < array[i])
            array[0] = array[i];
    }

    cout << endl << "Largest element = " << array[0];

    return 0;

}

