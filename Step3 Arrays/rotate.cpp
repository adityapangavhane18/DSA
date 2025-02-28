// 6. Left rotate array by on place

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
     //Brute force solution
// void leftRotate(int arr[],int n,int d) {
//     d = d % n;

//     int temp[d];
//     for(int i=0; i<d ;i++)
//     {
//         temp[i] = arr[i];
//     }
//     for(int i=d; i<n ;i++)
//     {
//         arr[i - d] = arr[i];
//     }
//     for(int i=n - d; i<n ;i++)
//     {
//         arr[i] = temp [i - (n-d)];
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int d;
//     leftRotate(arr, n, d);
//     for(int i=0; i<n; i++){
//         cout<< arr [i] << " ";
//     }
//  return 0;
// }

// Optimal solution
int leftRotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
return 0 ;
}

int main() {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int d;
        cin >>d;
        leftRotate(arr, n, d);
        for(int i=0; i<n; i++){
            cout<< arr [i] << " ";
        }
     return 0;
    }