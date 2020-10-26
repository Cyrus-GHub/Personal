/* Calculates time left till retirement */
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int age;

	cout << "Enter your name: ";
	getline(cin, name); // We use 'getline' instead of using 'cin' directly because user may input 'terminators' i.e., Space or commass

	cout << "Hello " << name << endl;
	cout << endl;
	cout << "Enter you age: ";
	cin >> age;

	cout << endl;
	cout << endl;
	
	int retire = 65 - age;

	cout << name << " wil retire in " << retire << " years";
	
	
	cout << endl;
	cout << endl;

}