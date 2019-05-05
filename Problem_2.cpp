#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int recentbill, currentbill, waterdemand = 35, latecharge = 20, gallons;
	double cpergallon = 1.10, bill;
	char latebalance, x;
	
	cout << "WATER BILL CALCULATION" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "Please enter your recent water meter reading: "; cin >> recentbill;
	cout << "\nPlease enter your current water meter reading: "; cin >> currentbill;
	cout << "\nDid you pay your recent bill? ('Y' or 'N'): " ; cin >> latebalance;
	gallons = currentbill - recentbill;

	if (latebalance == 'Y')
	{
		bill = (cpergallon * gallons) + waterdemand;
	}
	else
	{
		bill = (cpergallon * gallons) + waterdemand + latecharge;
	}
	cout << "\nYour total Water Bill is = " << bill << " pesos" << endl;

 getch();
 return 0;
}
