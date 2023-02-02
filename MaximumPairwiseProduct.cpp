/*procedure MaxPairwiseProductNaive(A, n)
2: product ← 0
3: for i ← 1, n do
4: for j ← 1, n do
5: if i! = j then
6: if product < A[i] ∗ A[j] then
7: product = A[i] * A[j]
8: end if
9: end if
10: end for
11: end for
12: return product
13: end procedure
*/







#include <bits/stdc++.h>

using namespace std;
int MaxPairwiseProductNaive(int A[],int n)
{
  
   int product=0;
   for(int i=1;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(i!=j)
           {
               if(product<A[i]*A[j])
               {
                   product=A[i]*A[j];
               }
           }
       }
   }
 
     return product;
}
void generatenumber(int *p,int s)
{
    srand(time(0));
    for(int i=0;i<s;i++)
    {


            p[i]=rand()%100+1;

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
    

  cout<<"Enter one integers\n";
  cin>>n;
  int *a = new int[n];
  generatenumber(a,n);
  MaxPairwiseProductNaive(a,n);
  print(a,n);
  
  
 

 
  

  
  
    return 0;
}
