#include <iostream>

using namespace std;

int sum{ 0 };
int suffix_sum(int arr[], int len, int s) {
    if (len == 0)
        return arr[0];
    suffix_sum(arr, len - 1, s);
    if (len - 1 < s)
        sum += arr[len - 1];
    return sum;
}

int main()
{
    int arr[] = { 1, 3, 4, 6, 7 };
    cout << suffix_sum(arr, size(arr), 3) << endl;
}