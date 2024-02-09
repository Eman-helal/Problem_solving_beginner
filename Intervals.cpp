#include <iostream>

using namespace std;

int main()
{
	/*The program take a number from the user and three intervals and see if the number 
	is in the interval then print the number of intervals that the number belongs to */
	int count = 0, num, s1, e1, s2, e2, s3, e3;
	cin >> num >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
	if (s1 <= num && num <= e1)
		count++;
	if (s2 <= num && num <= e2)
		count++;
	if (s3 <= num && num <= e3)
		count++;
	cout << count << endl;
}
