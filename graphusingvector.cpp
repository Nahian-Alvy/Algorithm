#include <bits/stdc++.h>

using namespace std;
 

int main()
{
    vector <int> g[100];
      int nodes, edges;
    cin>>nodes>>edges;
    int v,u;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
for (int i=0;i<nodes;i++)
{
    cout<<i<<"---->";
     for(int j=0;j<g[i].size();j++)
    {
        cout<<g[i][j]<<" ";
    }
    
   
        cout<<endl;
        
    }
    
    
   
    return 0;
}
