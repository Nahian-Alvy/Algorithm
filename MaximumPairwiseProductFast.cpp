/*procedure MaxPairwiseProductFast(A, n)
2: index1 ← 0
3: for i ← 0, n − 1 do
4: if A[i] ≥ A[index1] then
5: index1 = i
6: end if
7: end for
8: index2 ← 0
9: for i ← 1, n − 1 do
10: if i! = index1&&A[i] ≥ A[index2] then
11: index2 = i
12: end if
13: end for
14: return A[index1] ∗ A[index2]
15: end procedure
*/




#include <bits/stdc++.h>

using namespace std;
int MaxPairwiseProductNaive(int A[],int n)
{
  
   int index1=0;
   for(int i=0;i<n-1;i++)
   {
       if(A[i]>=A[index1])
       index1=i;
   }
   int index2=0;
       for(int i=0;i<n-1;i++)
       {
           if(i!=index1 && A[i]>=A[index2])
           {
               index2=i;
              
           }
       }
   
 
     return A[index1]*A[index2];
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
