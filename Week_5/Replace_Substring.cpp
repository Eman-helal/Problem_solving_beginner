#include <iostream>

using namespace std;

bool starts_with(string input, string pattern, int pos) {
    int end = pattern.size();
    string substring;
    for (int i = pos; i < pos+end;i++) {
        substring += input[i];
    }
    if (substring == pattern)
        return true;
    return false;
}

string replace_str(const string &input, string pattern, string to) {
    string output;
    int size = pattern.size();
    for (int i = 0; i < input.size();i++) {
        if (starts_with(input, pattern, i)) {
            output += to;
            i += size-1;
        }
        else
            output += input[i];
    }
    return output;
}
int main()
{
    cout << starts_with("aabcadaaad", "aa", 2) << endl;
    cout << replace_str("aabcadaaad", "aa", "") << endl;
}