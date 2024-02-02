
#include <iostream>

using namespace std;
int main()
{
	//The program should calculate the remainder of deviding two numbers
	// the user will enter two numbers N, M
	int N, M, i_part, remainder;
	cin >> N >> M;
	i_part = N / M;
	remainder = N - M * i_part;
	cout << remainder<<endl;
}
