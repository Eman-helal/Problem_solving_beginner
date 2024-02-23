#include <iostream>

using namespace std;

int main()
{

	// The link https://codeforces.com/group/ZzHCrKVEj7/contest/429375/problem/G
	int T, Total = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b, c, cnt=0;
		cin >> a >> b >> c;
		if (a == 1) {
			++cnt;
		}
		if (b == 1) {
			++cnt;
		}
		if (c == 1) {
			++cnt;
		}
		if (cnt >= 2) {
			++Total;
		}
	}
	cout << Total << endl;
}