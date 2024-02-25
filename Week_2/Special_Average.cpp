#include <iostream>

using namespace std;


int main()
{
	int n; 
	cin >> n;
	int cnt{ 1 }, odd_sum{ 0 }, even_sum{ 0 }, odd_cnt{ 0 }, even_cnt{ 0 };
	while (cnt <= n) {
		int num;
		cin >> num;
		if (cnt % 2 == 0) {
			even_sum += num;
			even_cnt++;
		}
		else {
			odd_sum += num;
			odd_cnt++;
		}
		cnt++;
	}
	cout << (odd_sum / odd_cnt) << " " << (even_sum / even_cnt) << "\n";
}