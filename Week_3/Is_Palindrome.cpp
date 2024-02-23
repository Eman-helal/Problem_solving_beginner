#include <iostream>

using namespace std;

int main()
{
	int N, nums[1000]; 
	bool bal = true;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];

	}
	for (int j = 0; j < N / 2; j++) {
		if (nums[j] != nums[N - j - 1]) {
			bal = false; 
			break;
		}
	}
	if (bal) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
}
