#include <iostream>
using namespace std;
int **matrix(int r,int c)
{
    int ** m = new int* [r];
    for(int i=0;i<r;i++)
    {
        m[i]=new int [c];
    }
   return m;
}
int main()
{
    int row;
    int column;
    cin>>row>>column;
    int **p= matrix(row,column);
   for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           cin>> p[i][j];
        }
    }

   for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
