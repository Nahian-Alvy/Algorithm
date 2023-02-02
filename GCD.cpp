#include <iostream>

using namespace std;
int gcd(int x,int y)
{
    int a, b, t, g;
     a = x;
     b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  g = a;
    
}

int main()
{  
    int x, y;

  cout<<"Enter two integers\n";
  cin>>x>>y;

 
  

  gcd(x,y);
  

  cout<<"Greatest common divisor of "<<x<<" and "<<y<<"="<<gcd(x,y);
  
    return 0;
}
