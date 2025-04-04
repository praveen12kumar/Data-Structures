/*
Given an array and a positive integer k, find the first negative integer for each window(contiguous subarray) of size k. If a window does not contain a negative integer, 
then print 0 for that window.

nput: arr[] = [-8, 2, 3, -6, 1] , k = 2
Output: [-8, 0, -6, -6]

Explanation: First negative integer for each window of size k
    [-8, 2] = -8
    [2, 3]= 0 (does not contain a negative integer)
    [3, -6] = -6
    [-6, 10] = -6

*/

#include <bits/stdc++.h>
using namespace std;

// brute force
// take a for loop from i = 0 to n-k
// take another for loop from j = 0 to k
// check if arr[j] < 0 then push arr[j] in vector
// if arr[j] > 0 then push 0 in vector

// vector<int>firstNegativeInt(vector<int>&arr, int k){
//     vector<int>res;
//     int n = arr.size();
//     for(int i = 0; i < (n -  k + 1); i++){
//         bool flag = false;
//         for(int j = 0; j < k; j++){
//             if(arr[i+j] < 0){
//                 res.push_back(arr[i+j]);
//                 flag = true;
//                 break;
//             }
//         }
//         if(!flag){
//             res.push_back(0);
//         }
//     }

//     return res;
// }


// optimized solution
vector<int>firstNegativeInt(vector<int>&arr, int K){
    vector<int>ans;
    int n = arr.size();
    queue<int>q;

    int i;
    for(i = 0; i < K-1; i++){
        if(arr[i] < 0){
            q.push(arr[i]);
        }
    }
    
    for(i; i < n; i++){
        if(arr[i] < 0){
            q.push(arr[i]);
        }
        
        if(!q.empty()){
           ans.push_back(q.front());
           if(q.front() == arr[i-K+1]){
               q.pop();
           }
           
        }
        else{
            ans.push_back(0);
        }
        
    }
    return ans;

}


int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    vector<int>arr(size);
    cout<<"Enter array elements: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter window size"<<endl;
    cin>>k;

    vector<int>result = firstNegativeInt(arr, k);

    for(auto it: result){
        cout<<it<<" ";
    }
    return 0;
}