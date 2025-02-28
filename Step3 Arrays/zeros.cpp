// 7. Move all zeros to end of array

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// //brute force solution 
// vector<int> moveZeros(int n,vector<int>a){
//     //step 1
//     vector<int> temp;
//     for(int i=0;i<n;i++) {
//         if(a[i] !=0){
//             temp.push_back(a[i]);
//         }
//     }
//     //step 2
//     int nz =temp.size();
//     for(int i=0;i<nz;i++) {
//         a[i] = temp[i];
//     }

//     //step 3 
//     for(int i=nz;i<n;i++){
//         a[i]=0;
//     }

// return 0;
// }

vector<int> moveZeros(int n,vector<int> a){

    for j=-1;
    for(int i=0;i<n;i++) {
        if(a[i] == 0){
            j = i;
            break;
        }
    }
    //no non zero numbers 
    if(j == -1) return a;

    for(int i=j+1;i<n;i++) {
        if(a[i] !=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a ;
}