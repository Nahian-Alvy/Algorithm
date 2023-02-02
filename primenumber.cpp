/*IsPrime
1: procedure isPrime(n)
2: F lag ← true
3: for i ← 2, √n do
4: if n%i == 0 then
5: F lag ← f alse
6: break
7: end if
8: end for
9: return F lag
10: end procedure
*/







#include <iostream>

using namespace std;
int isPrime(int n)
{
  
  bool flag=true;
      for(int i = 2; i <= n/2; i++)
      {
          if(n % i == 0)
          {
              
              flag=false;
              break;
          }
      }
      return flag;

}

int main()
{  
    int x;

  cout<<"Enter integers\n";
  cin>>x;
  
  isPrime(x);

  if(isPrime(x)==true)
  {
      cout << "Number is Prime."<<endl;
  }
  else
  {
      cout << "Number is not  Prime."<<endl;
  }
  

 
  

  
  
    return 0;
}
