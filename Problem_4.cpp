#include <iostream>
#include <conio.h>
using namespace std;

int main () 
{
	int x = 1;
	cout << "Counting...\n\n" << endl;

while(x < 31)
{
	cout << x << ",";
	x++;

    if (x == 11)
	{
		x++; continue;
	}
	else if(x == 13)
	{
		x++;continue;
	}
	else if(x == 15)
	{
		x++;continue;
	}
	else if(x == 17)
	{
		x++;continue;
	}
	else if(x == 19)
	{
		x++;continue;
	}
	else if(x == 21)
	{
		x++;continue;
	}
	else if(x == 23)
	{
		x++;continue;
	}
	else if(x == 25)
	{
		x++;continue;
	}
	else if(x == 27)
	{
		x++;continue;
	}
	else if(x == 29)
	{
		x++;continue;
	}
}
  getch();
  return 0;
}
