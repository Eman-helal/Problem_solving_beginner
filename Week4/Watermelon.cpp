#include <iostream>

using namespace std;

int main()
{
	// the link:  https://codeforces.com/group/ZzHCrKVEj7/contest/429375/problem/A
	// if the weight was 1 or two it will give an odd number 
	int W;
	cin >> W;
	if (W > 2) {
		if (W % 2 == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else {
		cout << "NO\n";
	}
}
