<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
	int N, Arry[200], min = INT_MAX;
	cin >> N;
	for (int k = 0; k < N; k++) {
		cin >> Arry[k];
	}
	for (int i = 0; i < N;i++) {
		for (int j = i+1; j < N;j++) {
			int sum = Arry[i] + Arry[j] + j - i;
			if (sum < min) {
				min = sum;
			}
		}
	}
	cout << min << endl;
=======
#include <iostream>

using namespace std;

int main()
{
	int N, Arry[200], min = INT_MAX;
	cin >> N;
	for (int k = 0; k < N; k++) {
		cin >> Arry[k];
	}
	for (int i = 0; i < N;i++) {
		for (int j = i+1; j < N;j++) {
			int sum = Arry[i] + Arry[j] + j - i;
			if (sum < min) {
				min = sum;
			}
		}
	}
	cout << min << endl;
>>>>>>> 77dda2487233aa1db96ddb792ecb1dbf0d4df575
}