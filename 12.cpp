#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    int id;
     string fn;
     string ln;
     int n;
     int sum=0;
     cin>>fn>>ln>>id;
     cin>>n;
     int scores[n];
     for(int i=0;i<n;i++)
     {
         cin>>scores[i];
     }
     for(int i=0;i<n;i++){
      sum=sum+scores[i];
     }
     int grade=sum/n;
     //cout<<grade;
     cout<<"Name:"<<fn<<","<<ln<<endl;
     cout<<"ID : "<<id<<endl;
     if(grade>=90 && grade<=100)
     {
         cout<<"Grade : "<<"O"<<endl;
     }
     else if(grade>=80 && grade<90)
     { 
         cout<<"Grade : "<<"E"<<endl;

     }
     else if(grade>=70 && grade<80)
     { 
         cout<<"Grade : "<<"A"<<endl;

     }
     else if(grade>=55 && grade<70)
     { 
         cout<<"Grade : "<<"P"<<endl;

     }
     else if(grade>=40 && grade<55)
     { 
         cout<<"Grade : "<<"D"<<endl;

     }
     else{
         cout<<"Grade : "<<"T"<<endl;
     }
    return 0;
}