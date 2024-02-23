#include <iostream>

using namespace std;

int main()
{
	int k, N, sum = 0, nums[200], max = INT_MIN, start, end;
	cin >> k >> N;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	for (int j = 0; j < N - 2; j++) {
		sum = nums[j] + nums[j + 1] + nums[j + 2];
		if (sum > max) {
			max = sum;
			start = j;
			end = j + 2;
		}
	}
	cout << start << " " << end << " " << max;
}
