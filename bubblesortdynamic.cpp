#include <bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n)
{
    int flag;
    for(int k=0;k<n-1;k++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                swap(a[i],a[i+1]);
                flag=1;

        }
        if(flag==0)
        break;

    }
}
void generatenumber(int *p,int s)
{
    srand(time(0));
    for(int i=0;i<s;i++)
    {


            p[i]=rand()%10000+1;

    }

}
void print(int *ar,int n)
{
     for(int i=0;i<n;i++)
    {


        cout<<ar[i]<<" ";

        cout<<endl;
    }
}
int main()
{
    int n;

    cin>>n;

     int * a = new int [n];

    generatenumber(a,n);
    print(a,n);
    bubblesort(a,n);
    cout<<"-------------------"<<endl;
    print(a,n);




    return 0;
}
