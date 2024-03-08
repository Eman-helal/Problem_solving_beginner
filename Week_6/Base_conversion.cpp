#include <iostream>

using namespace std;
void convert(int t) {
	if (t == 0)
		return;
	int num;
	cin >> num;
	// some code
	convert(t - 1);
}

int main()
{
	int t;
	cin >> t;
	convert(t);
}