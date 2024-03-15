#include <iostream>

using namespace std;

int i;
void array_increment(int arr[], int len) {
    if (len==0)
        return;
    array_increment(arr, len - 1);
    int res = arr[len - 1] + (len-1);
    cout << res << " ";
}

int main()
{
    int arr[] = { 1, 8, 2, 10, 3 };
    array_increment(arr, 5);
}