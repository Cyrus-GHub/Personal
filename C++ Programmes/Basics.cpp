// This is a very basic program in the C++ language
// I wrote this to get a hang of the different aspects of C++


#include <iostream>   // # is a pre-processor directive, everything written inside <> is a header file
#include <cmath>
#include <string>
using namespace std;  // Sets the default namesapce to STANDARD


int main()
{
	// Here a few variables that we're going to use

	string Name = "Tim";
	int Age = 50;
	double CGPA = 8.9;
	string End = "This is written in C++"; // Used later to showcase string functions

	// Let's write something using these
	
	cout << "There was a man named " << Name << endl;
	cout << "He was " << Age << " years old\n";
	cout << "He liked the name " << Name << endl;
	cout << "But he didn't like being " << Age << endl;
	  
	cout << endl;
	
	Name = "John"; // This will change the value stored in the string variable 'Name' form Tim to John 

	cout << "He also had a friend named " << Name << endl;
	cout << Name << " had a bright mind" << endl;
	cout << "He scored " << CGPA << " CGPA in high school" << endl;

	cout << endl;
	cout << endl;

	// Now a little Maths

	int a, b;
	a = 1;
	b = 3;
	
     
	cout << "The following are results of various mathematical operations done on " << a << " and " << b << ", i.e., (" << a << " 'operator' " << b << ")" << endl;

	cout << endl;

	cout << "Addition: " << a+b << endl;
	cout << "Substraction: " << a-b << endl;
	cout << "Multiplication: " << a*b << endl,
	cout << "Division: " << a/b << endl;  // This will only give integer output because inputs are integers
    cout << "Modulus: " << a%b << endl;  // '%' is read modulus, it gives us the remainder

	cout << endl;

    // If we use multiple mathematical operators at once, they follow BODMAS convention

	cout << a << "+" << b << "*" << b << " = " << a+b*b << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;

    // A few other math operations

	cout << "Power: " << pow(2,4) << "\n";  // Here we raised 2 to its 4th power i.e., 2^4
	cout << "Square Root: " << sqrt(25) << "\n";
	cout << "Round a number: " << round(4.6) << "\n";
	cout << "Rounds up a number: " << ceil(4.1) << "/n";;
	cout << "Rounds down a number: " << floor(4.8) << "/n";
	cout << "Retrns the bigger of 2 numbers: " << fmax(2,6) << "\n";
	cout << "Retrns the smaller of 2 numbers: " << fmin(2,6) << "\n";
	

	// 'String Functions' are functions that performs a task for us and operate on a string

	cout << End.substr(0, 19) << End[19] << End[20] << End[21] << endl;
	cout << "The above line has " << End.length() << " index positions" << endl;
	cout << "Also, the letter C occurs at index postion " << End.find("C", 0) << " in this line\n";

}