// This is a very basic program in the C++ language
// I wrote this to get a hang of the different aspects of C++


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// We start the program with these

int main()
{
	// Here a few variables that we're going to use

	string Name = "Tim";
	int Age = 50;
	double CGPA = 8.9;
	string End = "This is written in C++";

	// Let's write something using these
	
	cout << "There was a man named " << Name << endl;
	cout << "He was " << Age << " years old\n";
	cout << "He liked the name " << Name << endl;
	cout << "But he didn't like being " << Age << endl;
	  
	cout << endl;
	
	Name = "John";

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
	cout << "Division: " << a/b << endl;
    cout << "Modulus: " << a%b << endl;  // '%' is read modulus, it gives us the remainder

	cout << endl;

    // If we use multiple mathematical operators at once, they follow BODMAS convention

	cout << a << "+" << b << "*" << b << " = " << a+b*b << endl;
	cout << "If we add 2 to " << a << " we get " << a++ << endl;

	cout << endl;
	cout << endl;
	cout << endl;

    // A few other math operations

	cout << "Power: " << pow(2,4) << "\n";
	cout << "Square Root: " << sqrt(25) << "\n";
	cout << "Round a number: " << round(4.6) << "\n";
	cout << "Rounds up a number: " << ceil(4.1) << "/n";;
	cout << "Rounds down a number: " << floor(4.8) << "/n";;
	cout << "Retrns the bigger of 2 numbers: " << fmax(2,6) << "\n";
	cout << "Retrns the smaller of 2 numbers: " << fmin(2,6) << "\n";
	

	// 'String Functions' are functions that performs a task for us and operate on a string

	cout << End.substr(0, 19) << End[19] << End[20] << End[21] << endl;
	cout << "The above line has " << End.length() << " index positions" << endl;
	cout << "Also, the letter C occurs at index postion " << End.find("C", 0) << " in this line\n";




// Let's make a function that gives us the cube of a number
// Then, we'll 'call' this function later
// The function itself is placed at the end of the program


int Fn(string Name, double Num);   // This line addresses that there is such a function in the program


//We'll continue with the code


string gender, Name2;
int height;

cout << "Enter your name: ";
getline (cin, Name2);
    

cout << "Enter your gender: \n";
cin >> gender;

cout << "Enter your height in cm: \n";
cin >> height;


if(height> 180)
{
  cout << "Your are a tall " << gender << "\n"; 
}

else
{
  cout << "You are not a tall " << gender << "\n";
}


Fn("",1);
return 0;



}

int Fn(string Name, double Num)
{

  cout << "Enter a number : " << endl;
  cin >> Num;

  cout << "The cube of " << Num << " is " << pow(Num, 3) << endl;
  cout << endl;

  return 0;
}
