#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	if (num1 % 2 == 0) {
		if (num2 % 2 == 0)
			cout << num1 / num2 << endl;
		else
			cout << num1 - num2 << endl;
	}
	else {
		if (num2 % 2 == 0)
			cout << num1 + num2 << endl;
		else
			cout<< num1 * num2 << endl;
	}
}