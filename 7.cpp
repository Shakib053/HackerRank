
#include<bits/stdc++.h>
using namespace std;

int main() {
  
   int n;
   cin>>n;
   int a[n];
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
   } 
   for(int i=n;i>0;i--)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}