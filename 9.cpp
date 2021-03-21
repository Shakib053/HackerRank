#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{  
     int n;
     cin>>n;
     long long factorial=1;
     if(n<0)
     {
         cout<<"negative er factorial nai\n";
     }
     else{
     for(int i=1;i<=n;i++)
     {
         factorial=factorial*i;
     }
     cout<<"Factorial of "<<n<<" is "<<factorial;
     }
     
   
    return 0;
}