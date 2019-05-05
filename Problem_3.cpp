#include<iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <cmath>

using namespace std;
int main()
{
  double y,v,num,num1;
  const double z=2.5;int x;

  cout <<"Input desired value of x: ";
  cin>> x;
  cout << "Input desired value of y: ";
  cin>>y;

switch(x)
{
 case 1: 
  if(y>1&&y<5)
  {
    v=x*y*z;
    cout << "V= "<<setw(10)<<v<<setprecision(2);
  }
  else if (y>=5)
  {
    v=x+(y/z);
    cout << "V= "<<setw(10)<<v<<setprecision(2);
  }
  else
  {
    v=x+y+z;
    cout << "V= "<<setw(10)<<v<<setprecision(2);
  }
  break;
  
 case 2:
  if(y<=5)
  {
    num1=(x-y)/z;
    v=abs(num1);
    cout << "V= "<<setw(10)<<v<<setprecision(2);
  }
  else if (y>5)
  {
    num=sqrt(y+z);
    v=x-num;
    cout << "V= "<<setw(10)<<v<<setprecision(2);
  }
  else
  {
    v=x+y+z;
    cout << "V= "<<setw(10)<<v<<setprecision(2);
  }
  break;

 default:
  v=x+y+z;
  cout << "V= "<<setw(10)<<v<<setprecision(2);
}
  
getch();
return 0;
}
