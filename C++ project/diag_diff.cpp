#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    int a[N][N];
    int i,j,diag1=0,diag2=0,diff=0;
    
    for(i=0;i<N;i++)
        {
        for(j=0;j<N;j++)
            cin>>a[i][j];  
        }
    
    for(i=0;i<N;i++)
        {
        for(j=0;j<N;j++)
            {
            if(i==j)
                {
                diag1= diag1+a[i][j];
                }
             }
        }
    
    for((i=N-1,j=0);i>=0,j<N;i--,j++)
        {
       
            diag2= diag2+a[i][j];
           
       }
   // cout<<"\n"<<diag1;
    //cout<<"\n"<<diag2;
    diff=std::abs (diag1-diag2);
    cout<<diff; 
    
    return 0;
}

