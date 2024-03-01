#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int num) {
    int cnt = 0;
    int end = ceil(sqrt(num));
    if (num == 1)
        return false;
    else if (num == 2)
        return true;
    else
        for (int i = 2; i <= end; i++) {
            if (num % i == 0)
                return false;
        }
    if (cnt != 0)
        return false;
    return true;
}

int nth_prime(int n) { //6
    int cnt{ 0 }, num = 1;
    while (cnt < n) {
        num++;
        if (is_prime(num))
            cnt++;
    }
    return num;
}

int main()
{
    int n = 13;
    cout<<is_prime(n)<<endl;
    cout << nth_prime(8)<<endl;
}