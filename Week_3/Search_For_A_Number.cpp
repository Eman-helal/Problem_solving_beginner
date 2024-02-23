#include <iostream>

using namespace std;

int main()
{
	int N, Q, nums[200], find[200], ind[200];
	cin >> N;
	for (int i = 0; i < N;i++) {
		cin >> nums[i];
	}
	cin >> Q;
	for (int j = 0; j < Q; j++) {
		cin >> find[j];
	}
	for (int k = 0; k < Q;k++) { 
		for (int l = 0; l < N; l++) {
			if (find[k] == nums[l]) {
				ind[k] = l;
				break;
			}
			else {
				ind[k] = -1;
			}
		}
	}
	for (int i = 0; i < Q; i++) {
		cout << find[i] <<" ---> "<< ind[i]<< endl;
	}
}
