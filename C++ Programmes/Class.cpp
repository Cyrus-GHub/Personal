#include <iostream>
using namespace std;
int main()
{
    class Phone
    {
    public:
        string Model;
        string SOC;
        string Display;
        int RAM;

        Phone(string aModel, string aSOC, string aDisplay, int aRAM)
        {
            aModel = Model;
            aSOC = SOC;
            aDisplay = Display;
            aRAM = RAM;
        }

        bool Enough_RAM()
        {
            if (RAM >= 6)
            {
                return true;
            }

            else
                return false;
        }
    };

    Phone P1("Pixel 5", "Snapdragon 765G", "6 inch 90Hz OLED", 8);
    Phone P2("Pixel 4a 5G", "Snapdragon 765G", "6.2 inch 60Hz OLED", 6);
    Phone P3("Pixel 3a", "Snapdragon 670", "5.6 inch 60Hz OLED", 4);

    cout << P3.Enough_RAM();

    return 0;
}