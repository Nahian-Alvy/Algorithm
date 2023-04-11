#include<bits/stdc++.h>
using namespace std;
int main(){
    int nodes, edges;
    cin>>nodes>edges;
   int **g= new int*[nodes];
    for(int i=0;i<nodes;i++){
        g[i] = new int[nodes];
    }
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            g[i][j]=0;
        }
    }
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        g[u][v]=1;
        g[v][u]=1;
    }
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
