#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int A[26]={0};
        int count=26;
    string s;
    char ch= ' ';
    while(true)
        {
        //scanf("%c", &ch);
        cin>>ch;
        cout << ch << endl;
        if(ch == '\n'){
            break;
        }
        if(ch==32)
            continue;
        ch=tolower(ch);
        int i = ch-97;
        if(A[i]==1)
            continue;
        A[i]=1;
        count--;
    }
    if(count==0) {
     cout<<"Pangram";
    }else {
     cout<<"Not Pangram";
    }
   
           
        
        
    return 0;
}

