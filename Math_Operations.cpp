#include <iostream>
using namespace std;
int main()
{
	//Taking two numbers from the user and calculating the basic math operations +, -, *, /
	int num1, num2;
	cin >> num1 >> num2;
	// summation
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	//subtraction
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	//devision (care about deviding by zero exception)
	if (num2 == 0) {
		cout << num1 << " / " << num2 << " = " << "Not Defined\n";
	}
	else {
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	}
	//multiplication
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

}
