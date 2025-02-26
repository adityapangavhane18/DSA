  // print sum of first n numbers using parameterized way 

#include<iostream>
using namespace std;

 // print sum of first n numbers using parameterized way 

//  void f ( int i,int sum){
//     if(i<1){
//         cout<<sum ; 
//         return ;
//     }
//     f(i-1,sum +i);
// }

// int main () 
// {
//     f(3,0);
//     return 0 ;
// }

 // print sum of first n numbers using functional way 
 
 int sum (int n)
 {
  if(n==0) return 0 ;
  return n + sum(n-1);
 }

 int main()
 {
    int n =3;
    cout<< sum(n);
    return 0 ;
 }