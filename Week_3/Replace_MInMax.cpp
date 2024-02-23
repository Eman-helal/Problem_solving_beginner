<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
	int N, Arry[200];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Arry[i];
	}
	int min = Arry[0], max = Arry[0];
	for (int j = 0; j < N; j++) {
		if (Arry[j] < min)
			min = Arry[j];
		if (Arry[j] > max)
			max = Arry[j];
	}
	for (int k = 0; k < N; k++) {
		if (Arry[k] == max)
			Arry[k] = min;
		else if (Arry[k] == min)
			Arry[k] = max;
	}
	for (int l = 0; l < N; l++) {
		cout << Arry[l]<<" ";
	}

=======
#include <iostream>

using namespace std;

int main()
{
	int N, Arry[200];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Arry[i];
	}
	int min = Arry[0], max = Arry[0];
	for (int j = 0; j < N; j++) {
		if (Arry[j] < min)
			min = Arry[j];
		if (Arry[j] > max)
			max = Arry[j];
	}
	for (int k = 0; k < N; k++) {
		if (Arry[k] == max)
			Arry[k] = min;
		else if (Arry[k] == min)
			Arry[k] = max;
	}
	for (int l = 0; l < N; l++) {
		cout << Arry[l]<<" ";
	}

>>>>>>> 77dda2487233aa1db96ddb792ecb1dbf0d4df575
}