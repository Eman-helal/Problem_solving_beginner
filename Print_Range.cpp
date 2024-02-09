#include <iostream>

using namespace std;

int main()
{
	int end, start;
	cin >> start >> end;
	while (start <= end) {
		cout << start << endl;
		++start;
	}
}