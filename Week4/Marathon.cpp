#include <iostream>

using namespace std;

int main()
{
	// the link https://codeforces.com/group/ZzHCrKVEj7/contest/429375/problem/F
	int T, Arr[10000]; 
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b, c, d, cnt=0;
		cin >> a >> b >> c >> d;
		if (b > a) {
			++cnt;
		}
		if (c > a) {
			++cnt;
		}
		if (d > a) {
			++cnt;
		}
		Arr[i] = cnt;
	}
	for (int j = 0; j <T ;j++) {
		cout << Arr[j] << endl;
	}
}
