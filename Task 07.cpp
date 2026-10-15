#include <iostream>
using namespace std;
int  main()
{
	// Uzair Amjad
	// L1F26BSCS0104


	int cel;
	cout << "Enter temperature in Celsius: ";
	cin >> cel;

	int fah;
	fah = cel * 9 / 5 + 32;


	cout << "Temperature in Celsius: " << cel << endl;
	cout << "Temperature in Fahrenheit: " << fah << endl;


	// Celsius 37 gives Fahrenheit 98 because integer division loses the decimal .6.







}