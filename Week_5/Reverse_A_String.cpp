#include <iostream>

using namespace std;
string reverse_str(const string& str) {
    string res;
    int size = str.size();
    for (int i = 0; i < size;i++) {
        res += str[size - i-1];
    }
    return res;
}
int main()
{
    string name;
    cin >> name;
    cout << reverse_str(name);
}