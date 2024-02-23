<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
	int N, Arry[1000], value, pointer{ 0 };
	cin >> N;
	for (int i = 0; i < N;i++) {
		cin >> value;
		if (i == 0) {
			Arry[i] = value;
		}
		else if (value != Arry[pointer]) {
			Arry[pointer+1] = value;
			pointer++;
		}
	}
	for (int j = 0; j < pointer ;j++) {
		cout << Arry[j] << " ";
	}
}
=======
#include <iostream>

using namespace std;

int main()
{
	int N, Arry[1000], value, pointer{ 0 };
	cin >> N;
	for (int i = 0; i < N;i++) {
		cin >> value;
		if (i == 0) {
			Arry[i] = value;
		}
		else if (value != Arry[pointer]) {
			Arry[pointer+1] = value;
			pointer++;
		}
	}
	for (int j = 0; j < pointer ;j++) {
		cout << Arry[j] << " ";
	}
}
>>>>>>> 77dda2487233aa1db96ddb792ecb1dbf0d4df575
