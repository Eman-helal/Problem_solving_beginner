#include <iostream>

using namespace std;

/*link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
*/
void print_digits(int t) {
	string num;
	if (t == 0)
		return;
	cin >> num;
	int s = num.size();
	for (int i = 0; i < s;i++) {
		if (i < s - 1)
			cout << num[i] << " ";
		else
			cout <<num[i]<< endl;
	}
	print_digits(t - 1);
}

int main()
{
	int t;
	cin >> t;
	print_digits(t);
}