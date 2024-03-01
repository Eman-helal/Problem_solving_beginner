#include <iostream>
#include <cmath>

using namespace std;

void set_powers(int arr[], int len = 5, int m = 2) {
	for (int i = 0; i < len;i++) {
		arr[i] = pow(m, i);
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int len = 6, m = 2;
	set_powers(arr, len, m);
	for (int i = 0; i <len ;i++) {
		cout << arr[i] << " ";
	}
}
