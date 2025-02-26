// Print 1 to n using recursion


#include <iostream>
using namespace std;

void f (int i,int n)
{
    if(i>n){
        return;
    }
    cout<< i  << " " ;
    f(i+1,n);
}

int main ()
{
    f(1,4);
    return 0 ;
}