
#include <iostream>

using namespace std;
int main()
{
	int num, i_part, remain;
	cin >> num;

	//using %2
	if (num % 2 == 0) {
		cout << "even"<<endl;
	}
	else {
		cout << "odd"<<endl;
	}

	//even_num = i_part * 2 + 0;
	//odd_num = i_part * 2 + 1; 
	//using /2
	
	i_part = num / 2;
	remain = num - i_part * 2;
	if (remain == 0) {
		cout << "even"<<endl;
	}
	else {
		cout << "odd"<<endl;
	}
	//using %10
	
	if (num % 10 == 0 || num % 10 == 2 || num % 10 == 4 || num % 10 == 6 || num % 10 == 8) {
		cout << "even" << endl;
	}
	else {
		cout << "odd" << endl;
	}
}
