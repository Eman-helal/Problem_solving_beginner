#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0) {
		int n, min{ INT_MAX };
		cin >> n;
		while (n > 0) {
			int num;
			cin >> num;
			if (min > num) {
				min = num;
			}
			n--;
		}
		cout << min << " " << endl;
		t--;
	}
}