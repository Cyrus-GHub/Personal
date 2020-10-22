#include <iostream>
#include <conio.h>

void main()
{
float income,tax,surchrg;

cout<<"Enter Income of person : ";
cin>>income;

if(income<=50000.00)
tax=0;

else if (income<=100000.00)
tax=(income-50000.00)*10/100;

else if (income<=250000.00)
tax=(income-100000.00)*20/100+5000;

else
tax=(income-250000.00)*30/100+5000+30000;
 
if (tax>10000.00)
surchrg=tax*2/100;

else
surchrg=0;
 
cout<<"Income = "<<income<<"\n";
cout<<"TAX = "<<tax<<"\n";
cout<<"Surcharge = "<<surchrg<<"\n";


cout << "For additional information regarding tax slabs please visit the link below\n"; 
}
https://economictimes.indiatimes.com/wealth/tax/latest-income-tax-slabs/articleshow/62751981.cms