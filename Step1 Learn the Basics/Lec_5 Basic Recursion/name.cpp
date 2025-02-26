// Recursive function to print the name n times

#include <iostream>
using namespace std;

void f(int i, int n) {
    if (i > n) {
        return; // Base case: stop recursion when i exceeds n
    }
    cout << "Raj" << endl;
    f(i + 1, n); 
}

int main() {
    int n;
    // cout << "Enter the number of times to print the name: ";
    // cin >> n;

    f(1, 3); 
    return 0;
}
