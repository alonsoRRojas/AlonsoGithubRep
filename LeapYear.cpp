// LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int year;

	cout << "Enter year: ";
	cin >> year;
	

	//IF divisible by 4 AND not divisible by 100  ||  OR divisible by 400 = leap year
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		cout << year << " is leap year.";
	}
	else {
		cout << year << " is not leap year.";
	}
	
	return 0;

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
