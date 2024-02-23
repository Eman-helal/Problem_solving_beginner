#include <iostream>

using namespace std;

int main()
{
	int N, Arr[200], Freq[10]{ 0 };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Arr[i];
	}
	for (int j = 0; j < N; j++) {
		while (Arr[j] > 0) {
			int mod = Arr[j] % 10;
			Freq[mod] = Freq[mod] + 1;
			Arr[j] /= 10;
		}
	}
	for (int k = 0; k < 10;k++) {
		cout << k << " " << Freq[k] << endl;
	}
}