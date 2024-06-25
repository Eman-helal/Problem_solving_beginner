#include <iostream>

using namespace std;
int pnt[20]{ 0 };
string names[100];
int spec[100];
int status[100]{ -1 };

void menu() {
	cout << "\nEnter your choise: \n";
	cout << " 1) Add new patient\n";
	cout << " 2) Print all patients\n";
	cout << " 3) Get next patient\n";
	cout << " 4) Exit\n";
}
void add_front(int sp, string name, bool st) { 
	int pos = 5 * (sp - 1);
	for (int i = 5 * (sp - 1) +pnt[sp] ; i > pos; i--) {
		names[i] = names[i-1];
		spec[i] = spec[i - 1];
		status[i] = status[i - 1];
	}
	names[pos] = name;
	spec[pos] = sp;
	status[pos] = st;
	pnt[sp]++;
}
void add_end(int sp, string name , bool st) { 
	int pos = 5 * (sp - 1) + pnt[sp];
	names[pos] = name;
	spec[pos] = sp;
	status[pos] = st;
	pnt[sp]++;
}
void Add_new() {
	int sp; string name; bool st;
	cout << "Enter specialization, name, status: ";
	cin >> sp >> name >> st;
	if (pnt[sp] < 5) {
		if (st == 1)
			add_front(sp, name, st);
		else
			add_end(sp, name, st);
	}
	else
		cout << "Sorry we can't add more patients foe this specialization\n";
}
void Print_all() {
	for (int i = 1; i < 21;i++) { 
		if (pnt[i] > 0) {
			cout << "******************************\n";
			cout << "There are " << pnt[i] << " patients in specialization " << i << endl;
			for (int j = 5 * (i - 1); j < 5 * (i - 1) + pnt[i]; j++) {
				if (status[j] == 0)
					cout << names[j]<<" regular "  << endl;
				else if (status[j] == 1)
					cout  << names[j] << " urgent " << endl;
			}
		}
	}
}
void delete_patient(int sp) {
	for (int i = 5 * (sp - 1); i < 5 * (sp - 1) + pnt[sp];i++) {
		names[i] = names[i + 1];
		spec[i] = spec[i + 1];
	}
	pnt[sp]--;
}
void Get_patient() {
	int sp;
	cout << "Enter specialization: ";
	cin >> sp;
	if (pnt[sp] > 0)
		cout << names[5 * (sp - 1)] << " please go with the DR \n";
	else
		cout << "No patients at the moment. Have rest, Dr\n";
	delete_patient(sp);
}

int main()
{
	int opt;
	menu();
	cin >> opt;
	while (opt != 4) { 
		if (opt == 1)
			Add_new();
		else if (opt == 2)
			Print_all();
		else if (opt == 3)
			Get_patient();
		else
			cout << "Enter valid number :) \n";
		menu();
		cin >> opt;
	}

}