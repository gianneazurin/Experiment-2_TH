#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
   int constant, x, first = 0, second = 1;
   const int i = 22;
 
   cout << "Fibonacci Sequence: \n\n";
   for (x = 0; x < i; x++)
 
   {
      if ( x <= 1 )
         constant = x;
      else
      {
         constant = first + second;
         first = second;
         second = constant;
      }
      cout << constant << ",";
   }
 getch ();
   return 0;
}
