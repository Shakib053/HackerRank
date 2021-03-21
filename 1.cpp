#include <iostream>
using namespace std;
int main() {
   int t,x,x1;
   string s,s1;
   cin>>t;
   while(t--)
   {
      cin>>s;
      x=s.size();
      //x1=s1.size();
      //cout<<x<<endl;
      //cout<<x1<<endl;
      for(int i=0;i<=x-1;i=i+2)
      {
          cout<<s[i];
          
      }
      cout<<" ";
      for(int j=1;j<=x-1;j=j+2)
      {
          cout<<s[j];
      }
      cout<<endl;
      /*for(int i=0;i<=x1-1;i=i+2)
      {
          cout<<s1[i];
          
      }
      cout<<" ";
      for(int j=1;j<=x1-1;j=j+2)
      {
          cout<<s1[j];
      }*/
   }

   return 0;
}