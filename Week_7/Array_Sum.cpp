#include <iostream>

using namespace std;
int sum(int arr[], int len) {//1, 2, 3, 4, 5 //5
	if (len==0)
		return 0;
	return arr[len-1] + sum(arr, len - 1);
}

int main()
{
	int arry[] = { 10, 20 , 30, 10, 20 };
	cout<<sum(arry, 5);
}