#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{    
    int n;
    int a[10000];
    cin>>n;
    int i=0;
    while(n>0)
    {
    a[i]=n%2;
    n=n/2;
    i++;
    }
    //cout<<i<<"\n";
    int x=i;
    /*for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }*/
    int count=0;
    int mx=0;
    int ans=0;
    for(int i=0;i<x;i++)
    {
        if(a[i]==1)
        {
            count++;
            //mx=count;
        }
        else {
            count=0;
        }
        ans=max(ans,count);
    }
    cout<<ans;
    return 0;
}