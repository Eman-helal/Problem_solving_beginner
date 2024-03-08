#include <iostream>

using namespace std;

/*link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A */

void recursion(int n) {
	if (n == 0)
		return;
	cout << "I love Recursion\n";
	recursion(n - 1);
}
int main()
{
	int n;
	cin >> n;
	recursion(n);
}
