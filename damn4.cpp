#include<iostream>
#include<queue>
using namespace std;


int main(){

queue<int> s;

s.push(50);
s.push(90);
s.push(100);


while(!s.empty()){
        cout<<s.front()<<endl;
        s.pop();
}



return 0;
}
