#include <iostream>
using namespace std;


int secondary();
int maths(float Num);

int main()
{
    cout << "Hello World!\n";

    cout << maths(2) << "\n";

    return 0;
}

int secondary()
{
    cout << "Hello!\n" << "\n";

    return 0;
}  


int maths(float Num)
{
    return Num*Num*Num;
}

