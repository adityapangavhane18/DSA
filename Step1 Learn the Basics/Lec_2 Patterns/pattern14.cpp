#include<bits/stdc++.h>
using namespace std;

  void print14(int n){  
    int num=1;
    for(int i=0;i<=n;i++){
        //i=2
        for(char ch = 'A'; ch <='A' + i;ch++){
          cout<< ch <<" ";
          
        } 
        cout<< endl ;   
    }   
  }

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print14(n);
    }
    return 0;
}

// O/P : 
// 1
// 5
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
// A B C D E F 
