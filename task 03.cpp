#include <iostream>
using namespace std;
int main()
{
	//Uzair Amjad
	// L1F26BSCS0104
	cout << "Expression 1: " << 10 + 5 * 2 << endl;
	// prediction 20


	cout << "Expression 2: " << (10 + 5) * 2 << endl;
	// prediction was 30



	cout << "Expression 3: " << 20 - 5 - 3 << endl;
	// prediction was 12 and it went from left to right
	

	cout << "Expression 4: " << 100 / 7 << endl;
	// prediction was 13 which is wrong 



	cout << "Expression 5: " << 100 % 7 << endl;
	// prediction 2


	cout << "Expression 6: " << 2 * 3 + 8 / 4 - 1 << endl;
	// prediction 7


	cout << "Expression 6 after brackets: " << 2 * 3 + 8 / (4 - 1) << endl;

}