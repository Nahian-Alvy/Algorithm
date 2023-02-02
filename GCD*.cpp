/*Euclid’s algorithm
1: procedure GCD(n, m)
2: if n = m then
3: return m
4: else if n ≥ m then
5: return GCD(n − m, m)
6: else
7: return GCD(n, m − n)
8: end if
9: end procedure

*/




#include <iostream>

using namespace std;
int gcd(int x,int y)
{
  if (x=y)
 {
     return y;
 }
  else if(x>=y)
  {
      return gcd(x-y,y);
  }
    else
  { 
    return gcd(x,y-x);
  }

}

int main()
{  
    int x, y;

  cout<<"Enter two integers\n";
  cin>>x>>y;

 
  

  gcd(x,y);
  

  cout<<"Greatest common divisor of "<<gcd(x,y);
  
    return 0;
}
