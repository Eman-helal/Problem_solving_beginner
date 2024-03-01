#include <iostream>

using namespace std;

int N;
bool Is_Palindrome(int nums[]) {
	bool bal = true;
	for (int j = 0; j < N / 2; j++) {
		if (nums[j] != nums[N - j - 1]) {
			bal = false;
			break;
		}
	}
	return bal;
}
int main()
{
	int nums[1000];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];}

	if (Is_Palindrome(nums)) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
}