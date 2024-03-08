#include <iostream>

/* link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B */
using namespace std;
int cnt;
void print_from_1_to_n(int n) {
	if (n == 0)
		return;
	cout << (cnt-n+1) <<"\n";
	print_from_1_to_n(n - 1);
}	
int main()
{
	int n;
	cin >> n;
	cnt = n;
	print_from_1_to_n(n);

}
