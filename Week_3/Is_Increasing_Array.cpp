#include <iostream>

using namespace std;

int main()
{
	int N, nums[200];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	bool increase = true;
	for (int j = 0; j < N-1; j++) {
		if (nums[j + 1] < nums[j]) {
			increase = false;
			break;
		}
	}
	if (increase)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
}
