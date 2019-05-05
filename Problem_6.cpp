#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x, ans = 0;
    
    do
    {
    	cout << "\nEnter a number: "; cin >> x;
		for (int n = 1; n <= x; ++n) 
	{
        ans += n;
    }   
		cout << "The sum of all whole numbers from 1 to " << x << " is " << ans;
		ans = 0;
    }
	    while (x != 0);
		cout << "\nThank You!" << endl;
    
	getch();
	return 0;
}
