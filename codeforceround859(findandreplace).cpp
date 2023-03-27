
#include <bits/stdc++.h>

using namespace std;

int main()
{
   srand(time(0));
   int t;
   cin>>t;
   
   while(t--)
   {
       int n;
       string s;
       cin>>n>>s;
       bool ans = false;
       for(int i=0;i<2;i++)
       {
           vector<int>value(26,-1) ;
           value[s[0]-'a']=i;
           bool bad = false;
           for(int j=0;j<n;j++)
           {
              if(value[s[j]-'a']==-1) 
              {
                  value[s[j]-'a']=!value[s[j-1]-'a'];
              }
              if(j&&value[s[j]-'a']==value[s[j-1]-'a'])
              {
                  bad=true;
              }
           }
           if(!bad)
           {
               ans=true;
           }
       }
       cout<<(ans?"YES":"NO")<<endl;
       
   }

    
}
