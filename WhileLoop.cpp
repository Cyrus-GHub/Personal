// INCOMPLETE!

#include <iostream>
using namespace std;
int main()
{
    int secret = 7;
    int guess;

    cout << "Enter your guess: \n";
    cin >> guess;

 
    if(guess == secret)
    {
    cout << "You Win" << "\n";
    return 0;
    }

    while(guess == !secret)
    {
        cout << "Enter your guess: \n";
        cin >> guess;
    }
   
    
}
