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
{tax=(income-250000.00)*0.05;}

else if (500000.00<income && income<=750000.00)
{tax=(income-500000.00)*0.10 + 12500;}

else if (750000.00<income && income<=1000000.00)
{tax=(income-750000.00)*0.15 + 12500 + 25000;}

else if (1000000.00<income && income <=1250000.00)
{tax=(income-1000000.00)*0.20 + 12500 + 25000 + 37500;}

else if (1250000.00<income && income<=1500000.00)
{tax=(income-1250000.00)*0.25 + 12500 + 25000 + 37500 + 50000;}

else 
{tax=(income-1500000.00)*0.30 + 12500 + 25000 + 37500 + 50000 + 62500;}
 

// Surcharge

if (10000000>income && income>5000000.00)
surchrg=income*0.1;

if (20000000>income && income>10000000.00)
surchrg=income*0.15;

if (50000000>income && income>20000000.00)
surchrg=income*0.25;

if (income>50000000.00)
surchrg=income*0.37;

else
surchrg=0;

cess = tax*0.04;
 
printf("Income = %d", income);
printf("\nTAX = %d",tax);
printf("\nCess = %d", cess);
printf("\nSurcharge = %d",surchrg);
printf("\nTotal TAX Liability = %d", tax + cess + surchrg);


return 0;
}
