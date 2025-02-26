// Print 1 to n using recursion

#include<iostream>
using namespace std;

void f(int i , int n){
    if(i<1){
        return;
    }
    cout << i << " ";
    f(i-1,n);
}

int main()
{
  f(5,5);
  return 0;
}