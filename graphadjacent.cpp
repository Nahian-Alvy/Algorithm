#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    int cost;
};
int main(){
 
 
vector<Node> *G;
 
int node,edge;
cin>>node>>edge;
G = new vector<Node>[node];
    int u,v,w;
 
    for(int i=0;i<edge;i++){
        cin>>u>>v>>w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
 
for(int i =0;i<node;i++){
    cout<<i<<" ";
    for(int j=0;j<G[i].size();j++){
        cout<<"("<<G[i][j].value<<","<<G[i][j].cost<<")"<<" ";
        }
        cout<<endl;
}
 
 
return 0;
}
