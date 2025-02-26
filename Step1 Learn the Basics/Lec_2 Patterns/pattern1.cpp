#include<bits/stdc++.h>
using namespace std;

 void print1(int n){
     for(int i=0;i<n;i++){      // outer loop(for rows)
        for(int j=0;j<n;j++){  // inner loop(for columns)
        cout<<"*";
         }
         cout<<endl;
     }
 }
 int main(){
     int n;      //print 1   
     cin>>n ;
     print1(n);
}