#include <iostream>
using namespace std;
int main()
{
    class Phone
    {
    private:
        string Year;

    public:
        string Model;
        string SOC;
        string Display;
        int RAM;

        Phone(string aModel, string aYear, string aSOC, string aDisplay, int aRAM)
        {
            Model = aModel;
            SOC = aSOC;
            Display = aDisplay;
            RAM = aRAM;
            someYear(aYear);
        }

        string someYear(string aYear)
        {
            if (aYear == "2020" || aYear == "2019")
                Year = aYear;

            else
            {
                Year = "Old Device";
            }

            return 0;
        }

        string ModelYear()
        {
            return Year;
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

    Phone P1("Pixel 5", "2020", "Snapdragon 765G", "6 inch 90Hz OLED", 8);
    Phone P2("Pixel 4a 5G", "2020", "Snapdragon 765G", "6.2 inch 60Hz OLED", 6);
    Phone P3("Pixel 3a", "2019", "Snapdragon 670", "5.6 inch 60Hz OLED", 4);
    Phone P4("LG G6", "2017", "Snapdragon 820", "5.8 inch 60Hz LCD", 4);

    cout << P3.Enough_RAM() << "\n";
    cout << P3.ModelYear() << "\n";
    cout << P4.ModelYear();

    return 0;
}