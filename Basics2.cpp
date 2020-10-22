#include <iostream>
#include <string>
#include <cmath>
using namespace std;


// Let's make a functoin that gives us the cube of a number
// Then, we'll 'call' this function

void Fn(string Name, double Num)
{
    cout << "Enter your name: ";
    getline (cin, Name);
    
    cout << "Hello " << Name << ". Enter a number : " << endl;
    cin >> Num;

    cout << "The cube of " << Num << " is " << pow(Num, 3) << endl;


}


int main()
{
  Fn("X",1);

  return 0;
}

