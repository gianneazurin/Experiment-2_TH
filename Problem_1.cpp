#include<iostream>
#include<iomanip>
#include <conio.h>

using namespace std;

int main()
{
double hours, total, limit;
char package;

    const double Package_A = 995;
	const double Package_B = 1445;
	const double Package_C = 1995;
	
	double extraAhourP = 20;
	double extraBhourP = 10;
	
	cout << "Internet Service Provider" << endl;
	cout << "Three different subscription packages that we offer: " << endl;
	cout << endl;
	cout << "Package A: For P995/mo 10 hrs of access are provided." << endl;
	cout << "Additional hours are P20/hr." << endl;
	cout << "Package B: For P1495/mo 20 hrs of access are provided." << endl;
	cout << "Additional hours are P10/hr." << endl;
	cout << "Package C: For P1995/mo of unlimited access is provided." << endl;
	cout << endl;

cout << "Please enter the package you purchased: ";
package = cin.get();

if(package == 'A' || package == 'B' || package == 'C')
{

cout << "\nPlease enter the total amount of hours used: ";
cin >> hours;

if(package == 'A')
{
limit = 995;
if(hours < 10)
{   
total = limit;
}
else
total = ((hours - 10) * 20) + limit;

cout << "Your total will be: P" << total << "\n\n";
}

if(package == 'B')
{
limit = 1495;
if(hours < 20)
total = limit;
else
total = ((hours - 20) * 10) + limit;

cout << "Your total will be: P" << total << "\n\n";
}

if(package == 'C')
{
limit = 1995;
total = limit;
cout << "Your total will be: P" << total << "\n\n";
}
}
else
cout << "You did not enter A, B, or C!! \n\n"
    << "Please run the program again!! \n\n";

system("pause");

return 0;
}
