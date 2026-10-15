#include <iostream>
using namespace std;
int main()
{
	//Uzair Amjad
	// L1F26BSCS0104
	// 
	// 
	// Variables
	int price, quantity;


	// data entery

	cout << "Enter price: ";
	cin >> price;
	cout << "Enter quantity: ";
	cin >> quantity;

	// total + tax + grand tax

	int total = price * quantity;
	cout << "Total: " << total << endl;


	int tax = total * 5 / 100;
	cout << "Tax: " << tax << endl;

	int grandtax = total + tax;
	cout << "Grand tax: " << grandtax << endl;




















}

