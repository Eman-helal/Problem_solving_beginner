#include <iostream>

using namespace std;

int main()
{
	int key, num1, num2, num3, num4, num5,
		less_count = 0, greater_count = 0;
	cin >> key >> num1 >> num2 >> num3 >> num4 >> num5;
	if (num1 > key)
		greater_count++;
	if (num2 > key)
		greater_count++;
	if (num3 > key)
		greater_count++;
	if (num4 > key)
		greater_count++;
	if (num5 > key)
		greater_count++;
	less_count = 5 - greater_count;
	cout << less_count << " " << greater_count;
}
