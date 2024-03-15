#include <iostream>

using namespace std;

int res=0;
void accumulate_arr(int arr[], int len) {
    if (len == 0)
        return;
    accumulate_arr(arr, len - 1);
    res += arr[len-1];
    cout << res << " ";
}

int main()
{
    int arr[] = { 1, 8, 2, 10, 3 };
    accumulate_arr(arr, size(arr));
}