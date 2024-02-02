
#include <iostream>

using namespace std;

int main()
{
	//The program git the 4th digit from the right of the number 
	int num;
	cin >> num;
	cout << (num / 1000) % 10;
}
