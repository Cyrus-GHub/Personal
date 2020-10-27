#include <iostream> 
using namespace std;


//Let's make a function that cubes numbers

int Fn(string Name, double Num);   // This line addresses that there is such a function in the program
string IceCream (int ItemN);       // This line addresses that there is such a function in the program

// The actual functions are situated near the end of this program
// We'll continue with the code and 'call' these fuctions later



int main()
{
   cout << Fn(1) << "\n"; // We just 'called' the int function that cubes numbers

   cout << IceCream(1); // We just 'called' the string function that sorts several items in an ice cream parlor

   

   //WHILE LOOP

   // A guessing game using While Loop


{
    int secret = 42;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    bool ZeroGuessesLeft = false;

    cout << "Enter your guess: \n";
    cin >> guess;
 
    while(guess != secret && !ZeroGuessesLeft)
    { 
        if(guessCount < guessLimit)
    {
        cout << "Your guess was not the secret number: \n";
        cout << "Enter your guess: \n";
        cin >> guess;
        guessCount++;
    }
       else
       {
           ZeroGuessesLeft = true;
       }
    }
   

   if(ZeroGuessesLeft)
   {
       cout << "You Lose" << endl;
   }

   else
   { cout << "You Win!";
    return 0;
   }

} 





















}




//FUNCTIONS


// Here is that int function that we used earlier to cube numbers 

int Fn(double Num)
{

  cout << "Enter a number : " << endl;
  cin >> Num;

  return Num*Num*Num;
}



//Let's use the switch function to sort several items in an ice cream parlor

string IceCream (int ItemN)
{
string Item;

switch(ItemN)
{
	case 1: Item = "Vanilla Ice Cream"; break;
	case 2: Item = "Chocolate Ice Cream"; break;
	case 3: Item = "Mango Ice Cream"; break;
	case 4: Item = "Pista Ice Cream"; break;
	case 5: Item = "Orange Ice Cream"; break;
	default:Item = "Only 5 ice cream flavours available, enter a value from 1 to 5"; 
}
    cout << "Enter Item Number (1-5): ";
    cin >> ItemN;
    
    return Item;

}


