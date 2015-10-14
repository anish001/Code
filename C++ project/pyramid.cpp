#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int i,j, k;
    cout<<"Please enter the pyramid size: \n";
    cin>>N;
    cout<<"Right angle pyramid \n";
    for (i=0;i<N;i++)
        {
          for(j=i;j<N-1;j++)
              {
              cout<<" ";
              } 
          for(k=0;k<i+1;k++)
              {
              cout<<"#";
              }
 
       cout<<"\n";
        
       }  
    return 0;
}

