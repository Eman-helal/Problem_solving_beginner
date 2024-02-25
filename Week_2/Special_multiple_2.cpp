#include <iostream>

using namespace std;

int main()
{
	int n, cnt{ 0 }, start{ 3 };
	cin >> n;
	while (cnt < n) { //11
		if (start % 3 == 0 && start % 4 != 0) {
			cout << start << " ";
			cnt++;
		}
		start++;
	}
}