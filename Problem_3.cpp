#include<iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;
int main()

{
	double var, x, y, v;
	int Var1;
	const double z = 2.5;
	
	cout << "Input desired value of x: "; cin >> x;
	cout << "Input desired value of y: "; cin >> y;
	
	switch (x<3)
{
    case 1: 
	 if (y > 1 && y < 5)
	 {
	 v = x * y * z;
	 
	 cout << "V = " << setprecision(2) << setw(10) << v;
	 
}
else if (y >= 5)
{
	v = x + (y / z);
	cout << "V = " << setprecision(2) << setw(10) << v;
	}
else
{
	v = x + y + z;
	cout << "V = "<< setprecision(2) << setw(10) << v;
}
break;

    case 2:
	 if (y <= 5)
	 {
	 var = (x-y) / z;
	 v = abs (Var1);
	 cout << "V = "<< setprecision(2) << setw(10) << v;
} 
else if (y > 5)
{
	var = sqrt(x+z);
	v = x - var;
	cout << "V = "<< setprecision(2) << setw(10) << v;
	}
else
{
	v = x + y + z;
	cout << "V = "<< setprecision(2) << setw(10) << v;
}
break;
    
	default:
	 v = x + y + z;
	 cout << "V = "<< setprecision(2) << setw(10) << v;
}

 getch();
 return 0;
 
}
