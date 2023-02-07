#include <bits/stdc++.h>

using namespace std;


void selectionsort(int *a,int n)
{
    int j,i,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[k])
            {
              k=j;
            }
             swap(a[k],a[j]);
        }
    }
}
void printlist(int *p,int s)
{
    for(int i=0;i<s;i++)
    cout<<p[i]<<endl;
}


int main()
{
    int n;
    cin>>n;

    int *a = new int[1000];
    ofstream fout;
    fout.open("4k.txt");
     ifstream fin("4k.txt");


    srand(time(0));
    for(int i=0;i<n;i++)
    {
        fout<<rand()%1000+1<<endl;
    }

   for(int i=0;i<n;i++)
   {
       fin>>a[i];
   }
   selectionsort(a,n);
   printlist(a,n);

    return 0;
}
