#include <iostream>

using namespace std;

int main()
{
	double n1, n2, n3, n4, n5;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;

	//Calculating the average of the five numbers
	cout << (n1 + n2 + n3 + n4 + n5) / 5 << endl;

	// printing the Sum of the first three numbers devided by the sum of the last two
	cout << (n1 + n2 + n3) / (n4 + n5)<< endl;

	//printing the Avg of the first three numbers devided by the Avg of the last two
	cout << ((n1 + n2 + n3) / 3) / ((n4 + n5) / 2) << endl;

}
