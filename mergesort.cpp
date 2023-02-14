#include <bits/stdc++.h>

using namespace std;
int *Merge(int *A,int *B,int m,int n)
{
    int i=0,j=0,k=0;
    int *C = new int [m+n];
    while(i<m&&j<n)
    {
        if(A[i]<B[j])
        {
            C[k++]=A[i++];
        }
        else
        C[k++]=B[j++];
    }
    while(i<n){
        C[k++]=A[i++];
    }
    while(j<m)
    {
        C[k++]=B[j++];
    }
    return C;
}
void printlist(int *p,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<p[i]<<" ";
    }

}
int main()
{



    int a[4]={6,7,15,20};
    int b[5]={8,9,11,21,24};
    printlist(a,4);
    cout<<endl;
    printlist(b,5);
    cout<<endl;

    int *j = Merge(a,b,5,4);
    printlist(j,9);

}
