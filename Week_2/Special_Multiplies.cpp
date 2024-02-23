#include <iostream>

using namespace std;

int main()
{
	int end, num = 0;
	cin >> end;
	while (num <= end) {
		if (num % 8 == 0 || (num % 4 == 0 && num % 3 == 0)) {
			cout << num << " ";
		}
		num++;
	}
}
