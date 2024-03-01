#include <iostream>

using namespace std;
/*
int max(int a, int b, int c) {
	int max_num = a;
	if (b > max_num) { max_num = b; }
	if (c > max_num) { max_num = c; }
	return max_num;
}
int max(int a, int b, int c, int d) {
	int max_num = d;
	if (d < max(a, b, c))
		max_num = max(a, b, c);
	return max_num;
}
int max(int a, int b, int c, int d, int e) {
	int max_num = e;
	if (e < max(a, b, c, d))
		max_num = max(a, b, c, d);
	return max_num;
}
int max(int a, int b, int c, int d, int e, int f) {
	int max_num = f;
	if (f < max(a, b, c, d, e))
		max_num = max(a, b, c, d, e);
	return max_num;
}
*/

int max(int a, int b, int c) {
	int max_num = a;
	if (b > max_num) { max_num = b; }
	if (c > max_num) { max_num = c; }
	return max_num;
}
int max(int a, int b, int c, int d) {
	int max_num = a;
	if (b > max_num) { max_num = b; }
	if (c > max_num) { max_num = c; }
	if (d > max_num) { max_num = d; }
	return max_num;
}
int max(int a, int b, int c, int d, int e) {
	int max_num = a;
	if (b > max_num) { max_num = b; }
	if (c > max_num) { max_num = c; }
	if (d > max_num) { max_num = d; }
	if (e > max_num) { max_num = e; }
	return max_num;
}
int max(int a, int b, int c, int d, int e, int f) {
	int max_num = a;
	if (b > max_num) { max_num = b; }
	if (c > max_num) { max_num = c; }
	if (d > max_num) { max_num = d;	}
	if (e > max_num) { max_num = e; }
	if (f > max_num) { max_num = f; }
	return max_num;
}
int main()
{
	int res= max( 12, 23, 90, 100, 10);
	cout << res;
}