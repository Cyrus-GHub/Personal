/* 4 function calculator */
#include <iostream>
using namespace std;
int main()
{
    double n1, n2;
    char op;
    
    cout << "First number: ";
    cin >> n1;

    cout << "Choose an operator: ";
    cin >> op;

    cout << "Second number: ";
    cin >> n2;

if(op = '+')
{
    cout << n1 + n2;
}
    else if(op = '-')
{
    cout << n1-n2;
}

 else if(op = '*')
{
    cout << n1*n2;
}

else if(op = 'X')
{
    cout << n1*n2;
}

 else if(op = '/')
{
    cout << n1/n2;
}

else 
{
    cout << "INVALID OPERATOR. Please use one of the following operators: (+,-,*,/) ";
} 
 
    return 0;
}