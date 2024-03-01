
#include <iostream>

using namespace std;

int main()
{
	int N, Arry[200], min1, min2, min3; 
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Arry[i];
	}
	min1 = Arry[0];
	min2 = Arry[1];
	min3 = Arry[2];
	if (min3 > min2) {
		int temp = min3;
		min3 = min2;
		min2 = temp;
	}
	if (min3 > min1) {
		int temp = min3;
		min3 = min1;
		min1 = temp;
	}
	if (min2 > min1) {
		int temp = min2;
		min2 = min1;
		min1 = temp;
	}
	for (int i = 0;i < N; i++) {
		if (Arry[i] < min3) {
			min1 = min2;
			min2 = min3; 
			min3 = Arry[i];
		}
	}
	cout << min3 <<" "<< min2 <<" "<< min1;
}
