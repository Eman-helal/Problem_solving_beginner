#include <iostream>

using namespace std;
/*link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C */
void print_from_1_to_n(int n) {
	if (n == 0)
		return;
	if (n == 1)
		cout << n;
	else
		cout << n <<" ";
	print_from_1_to_n(n - 1);
}
int main()
{
	int n;
	cin >> n;
	print_from_1_to_n(n);

}
