#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, max, temp;
	cin >> num1 >> num2 >> num3;
	if (num2 < num1) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num3 < num2) {
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	if (num2 < num1) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num3 < 100)
		cout << num3 << endl;
	else if (num2 < 100)
		cout << num2 << endl;
	else if (num3 < 100)
		cout << num3 << endl;
	else
		cout << -1;
}