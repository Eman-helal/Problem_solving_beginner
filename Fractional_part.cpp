
#include <iostream>

using namespace std;

int main()
{
	//the program give the fractional part of the devision of two numbers
	int a, b;
	cin >> a >> b;
	double frac = (double)(a % b)/(double)b;
	cout << frac;
}
