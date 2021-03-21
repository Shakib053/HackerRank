#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{   

    int n;
    cin>>n;
    string search[n];
    map<string ,int>phonebook;
    while(n--){
        string a;
        int b;
        cin>>a>>b;
    phonebook.insert({a,b});
    //phonebook.insert({20,"awtwgw"});
    }
    /*for(map<int,string>::iterator i=phonebook.begin();i!=phonebook.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }*/
    map<string,int>::iterator it;
    string query;
    while( cin >> query ){
        it = phonebook.find(query);
        
        if ( it != phonebook.end() ){ // key is found in phoneBook    
            cout << it->first << "=" << it->second << '\n';
        }
        else{ // the iterator hit the end of the phone book without finding key
            cout << "Not found" << '\n';
        }
    }
    return 0;
}