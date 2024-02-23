#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, temp1, temp2;
	cin >> num1 >> num2 >> num3;
	//Bubble sort but we use loops in the Bubble sort so here I repeated a piece of code and this is not right :)
	if (num2 < num1) {
		temp1 = num1;
		num1 = num2;
		num2 = temp1;
	}
	if (num3 < num2) {
		temp2 = num2;
		num2 = num3;
		num3 = temp2;
	}
	if (num2 < num1) {
		temp1 = num1;
		num1 = num2;
		num2 = temp1;
	}
	cout << num1 << " " << num2 << " " << num3 << endl;
}
