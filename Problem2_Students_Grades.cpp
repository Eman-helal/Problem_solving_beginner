#include <iostream>
using namespace std;
int main()
{
	//Taking the name, id and math grades of two students and calculating the avg of their math grades

	int id1, id2;
	double grade1, grade2;
	string name1, name2;
	//the first student
	cout << "What is student 1 name: ";
	cin >> name1;
	cout << "His id: ";
	cin >> id1;
	cout << "His math exam grade: ";
	cin >> grade1;
	//the second student
	cout << "What is student 2 name: ";
	cin >> name2;
	cout << "His id : ";
	cin >> id2;
	cout << "His math exam grade: ";
	cin >> grade2;
	//printing their information and the avg of the math grades
	cout << "Students grade in math\n";
	cout << name1 << " (With id " << id1 << ") got grade: " << grade1<<endl;
	cout << name2 << " (With id " << id2 << ") got grade: " << grade2<<endl;
	cout << "Average grade is " << ((grade1 + grade2) / 2);
}

