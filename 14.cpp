#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
      Difference (vector <int>alem)
      { 
          elements=alem;
          
      }
     int computeDifference()
      {
          int max,min,s;
          s=elements.size();
          max=elements[0];
          min=elements[0];
          for(int i=1;i<s;i++)
          {
              if(max<elements[i]){ max=elements[i];}
              if(min>elements[i]){ min=elements[i];}
          }
          maximumDifference=abs(max-min);
          return maximumDifference;
      }

	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}