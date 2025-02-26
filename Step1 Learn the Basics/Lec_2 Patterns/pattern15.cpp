#include<bits/stdc++.h>
using namespace std;

  void print14(int n){  
    int num=1;
    for(int i=0;i<=n;i++){
        //i=2
        for(char ch = 'A'; ch <='A' + (n - i - 1);ch++){
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
