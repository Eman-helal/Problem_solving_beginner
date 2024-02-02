#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8;

    //Taking 8 numbers from the user and calculating the sum of the numbers in the odd and even places 
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;

    cout << n2 + n4 + n6 + n8 << " " << n1 + n3 + n5 + n7;
}
