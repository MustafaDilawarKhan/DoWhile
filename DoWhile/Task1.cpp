#include <iostream>
#include <string>
using namespace std;
int main()
{

	int counter = 0;
	string students;
	char choice;
	do {
		string currentname;
		cout << "Enter Name ";
		getline(cin, currentname);
		cin.ignore();

		students.append(currentname);
		students.append("\n");
		counter++;

		cout << "To continue enter choice Y/y ";
		cin >> choice;
		cin.ignore();


	} while (choice == 'Y' || choice == 'y');


	cout << "the list of all" << counter << " the students : \n" << students;

	return (0);
}