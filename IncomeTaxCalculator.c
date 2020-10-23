/* Calculate your Income tax as per current Indian tax slabs under the NEW tax regime for FY 2020-21 */

#include <stdio.h>

int main()
{

double income,tax,cess,surchrg;

printf("Enter Income: ");
scanf("&d", &income);

// Tax brackets

if(income<=250000.00)
{tax=0;}

else if (250000.00<income && income<=500000.00)
{tax=(income-250000.00)*5/100;}

else if (500000.00<income && income<=750000.00)
{tax=(income-500000.00)*10/100 + 12500;}

else if (750000.00<income && income<=1000000.00)
{tax=(income-750000.00)*15/100 + 12500 + 25000;}

else if (1000000.00<income && income <=1250000.00)
{tax=(income-1000000.00)*20/100 + 12500 + 25000 + 37500;}

else if (1250000.00<income && income<=1500000.00)
{tax=(income-1250000.00)*25/100 + 12500 + 25000 + 37500 + 50000;}

else 
{tax=(income-1500000.00)*30/100 + 12500 + 25000 + 37500 + 50000 + 62500;}
 

// Surcharge

if (10000000>income && income>5000000.00)
surchrg=income*10/100;

if (20000000>income && income>10000000.00)
surchrg=income*15/100;

if (50000000>income && income>20000000.00)
surchrg=income*25/100;

if (income>50000000.00)
surchrg=income*37/100;

else
surchrg=0;
 
printf("Income = %d", income);
printf("TAX = %d",tax);
printf("Cess = %d", cess);
printf("Surcharge = %d",surchrg);
printf("Total TAX Liability = %d", tax + cess + surchrg);


return 0;
}
