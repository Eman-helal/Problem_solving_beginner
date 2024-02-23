
#include <iostream>

using namespace std;
int main()
{
	// the program takes the Age and output no of years , months, Days :)
	int Age, Years, Months, Days;
	cin >> Age;
	Years = Age / 360;
	Age %= 360;
	Months = Age / 30;
	Days = Age % 30;
	cout << Years << " " << Months << " " << Days<<endl;
}
