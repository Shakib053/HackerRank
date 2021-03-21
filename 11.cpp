#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{    
    int n=6,m=6,ans=-2000,sum;
    //cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];

        }
    }

    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }*/
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            sum=a[i][j]+a[i-1][j]+a[i+1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j+1];
            ans=max(ans,sum);
        }
    }
    cout<<ans;
    return 0;
}