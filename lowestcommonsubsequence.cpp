#include<bits/stdc++.h>
using namespace std;

int LCS(string A, string B)
{
    int n=A.length();
    int m=B.length();

    int ** lcs=new int*[n+1];
     for(int i=0;i<n+1;i++)
     {
         lcs[i]=new int[m+1];
     }

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(i==0||j==0)
            {
                lcs[i][j]=0;
            }
        }
    }
     for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(A[i]==B[j] && A[i]!='\0' && B[j]!='\0')
            {
                lcs[i][j]=1+lcs[i-1][j-1];
            }
            else
            {
                lcs[i][j]=max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
    }
    return lcs[m][n];
}
int main()
{
    string s1="longest";
    string s2="stone";

    cout<<LCS(s1, s2);

    return 0;
}
