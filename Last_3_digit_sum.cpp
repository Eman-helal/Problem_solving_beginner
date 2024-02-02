
#include <iostream>

using namespace std;

int main()
{
	// The program takes a number and culculate the sum of the last three digits
	int num, sum = 0;
	cin >> num;
	sum += num % 10;
	num /= 10;
	sum += num % 10;
	num /= 10;
	sum += num % 10;
	cout << sum;

}
