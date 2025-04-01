/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.

 Note:
Unique element is always present in the array/list according to the given condition.
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Brute force
// int findUnique(int *arr, int n){
//     int result = -1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(arr[i] == arr[j] && i != j){
//                 break;
//             }
//             if(j == n-1){
//                 result = arr[i];
//             }
//         }
//     }
//     return result; 
// }



// Optimised
// int findUnique(int *arr, int n){
//     int result = 0;
//     map<int, int> mp;
//     for(int i = 0; i < n; i++){
//         mp[arr[i]]++;
//     }
//     for(auto it = mp.begin(); it != mp.end(); it++){
//         if(it->second == 1){
//             result = it->first;
//         }
//     }
//     return result;
// }

// more Optimised

int findUnique(int *arr, int n){
    int result = 0;
    for(int i = 0; i < n; i++){
        result = result ^ arr[i];
    }
    return result;
}




int main(){
    int num;
    cin >> num;

    int arr[num];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }

    cout << "output: "<< findUnique(arr, num);
}