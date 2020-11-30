#include <iostream>
using namespace std;
int main()
{
    float a, b, marks[72];
    int i = 0, roll, rank, next, largest = -2147483648;

    for (roll = 191; roll <= 260; roll++, i++)
    {
        cout << "\n For Roll no." << roll << "enter marks of Section A <space> marks of Section B : \n";
        cin >> a;
        cin >> b;
        marks[i] = a + b;
    }

    for (roll = 630; roll <= 631; roll++)
    {
        i = 70;
        cout << "\n For Roll no." << roll << "enter marks of Section A <space> marks of Section B : \n";
        cin >> a;
        cin >> b;
        marks[i] = a + b;
        i++;
    }

    printf("\n");

    for (i = 0; i < 72; i++)
    {
        if (marks[i] > largest)
        {
            largest = marks[i];
        }
    }

    return 0;
}