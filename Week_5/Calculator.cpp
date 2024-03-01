#include<iostream>

using namespace std;
double num1,  num2;
int menu() {
	int opt;
    cout << "Choose one of the following options: \n";
    cout << "   1) Add 2 numbers \n";
    cout << "   2) Subtract 2 numbers \n";
    cout << "   3) Multiply 2 numbers \n";
    cout << "   4) Devide 2 numbers \n";
    cout << "   5) End the program \n";
    cin >> opt;
    while (!(opt <= 5 && opt >= 1)) {
        cout << "Enter valid number, please.\n";
        cin >> opt;
    }
    return opt;
}
double Add(double num1, double num2) {
    return num1 + num2;
}
double Multiply(double num1, double num2) {
    return num1 * num2;
}
double Devide(double num1, double num2) {
    if (num2 == 0) {
        return 0;
    }
    else {
        return num1 / num2;
    }
}
double Subtract(double num1, double num2) {
    return num1 - num2;
}
void read() {
    cin >> num1;
    cin >> num2;
}

int main(){
    
    int op = menu();
    int cnt = 0;
    while (op != 5) {
        if (op == 1) {
            read();
            cout << Add(num1, num2) << endl;
            cnt++;
        }
        else if (op == 2) {
            read();
            cout << Subtract(num1, num2) << endl;
            cnt++;
        }
        else if (op == 3) {
            read();
            cout << Multiply(num1, num2) << endl;
            cnt++;
        }
        else if (op == 4) {
            read();
            if (num2 == 0)
                cout << "not defined\n";
            else
                cout << Devide(num1, num2) << endl;
            cnt++;
        }
        op = menu();
    }
if (op == 5) {
    cout << cnt << endl;
}
}