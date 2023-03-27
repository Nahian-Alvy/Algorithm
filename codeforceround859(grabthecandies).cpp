
#include <bits/stdc++.h>

using namespace std;

int main()
{
   srand(time(0));
   int t;
   cin>>t;
   
   while(t--)
   {
       int n, i;
       cin>>n;
       vector<int>a(n);
       int sum_even=0;
       int sum_odd=0;
      for( i=0;i<n;i++)
       {
           cin>>a[i];
       if(a[i]%2)
       {
           sum_odd+=a[i];
       }
       else
       {
           sum_even+=a[i];
       }
       }
       cout<<(sum_even>sum_odd? "YES":"NO")<<endl;
   }

    
}
