/*Euclid’s algorithm
1: procedure Euclid(a, b) ▷ The g.c.d. of a and b
2: r ← a mod b
3: while r ̸ = 0 do ▷ We have the answer if r is 0
4: a ← b
5: b ← r
6: r ← a mod b
7: end while
8: return b ▷ The gcd is b
9: end procedure */






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
