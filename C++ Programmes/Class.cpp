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
    };

    Phone P1("Pixel 5", "Snapdragon 765G", "6 inch 90Hz OLED", 8);
    Phone P2("Pixel 4a 5G", "Snapdragon 765G", "6.2 inch 60Hz OLED", 6);

    return 0;
}