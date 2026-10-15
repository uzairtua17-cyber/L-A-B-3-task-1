#include <iostream>
using namespace std;
int main()
{
	//Uzair Amjad
	// L1F26BSCS0104
	//Variables declaration

	int age, CreditHours, feeperCreditHour;

	// Cin and data

	cout << "Enter your age: ";
	cin >> age;


	cout << "Enter your Credit Hours: ";
	cin >> CreditHours;


	cout << "Enter fee per credit hour: ";
	cin >> feeperCreditHour;

	// Calculation

	int totalfee = CreditHours * feeperCreditHour;
	int discountedfee = totalfee - 2000;

	

	cout << "total fee: " << totalfee << endl;
	cout << "Discounted Fee: " << discountedfee << endl;


	// DATE OF BIRTH

	int birthyear = 2026 - age;
	int yearturing25 = birthyear + 25;


	cout << "Birth year: " << birthyear << endl;
	cout << "Year turing 25: " << yearturing25 << endl;


	// The extraction operator cin >> treats spaces, tabs, and newlines as whitespace separators. 
	// It skips them and reads the next value, so all three input formats produce the same results.


	//The decimal part .8 remains in the input stream because 
	// cin >> age reads an integer and stops at the decimal point.





}