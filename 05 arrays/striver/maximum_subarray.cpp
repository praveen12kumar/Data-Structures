/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.
Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// brute force

// int maxSubarray(vector<int>&arr){
//     int maxSum = INT_MIN;
    
//     for(int i = 0; i < arr.size(); i++){
//         int currentSum = 0;
//         for(int j = i; j < arr.size(); j++){
//             currentSum += arr[j];
//         }
//         maxSum = max(maxSum, currentSum);
//     }

//     return maxSum;
// }

// optmised approach
// kadane's algo

// As we move through the array, we decide:

// Should we continue adding the current element to our current sum?

// Or should we start fresh from the current element?

// We keep track of:

// currentSum: maximum subarray sum ending at current index

// maxSum: the overall maximum sum we’ve seen so far


int maxSubarray(vector<int>&arr){
    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i = 0; i < arr.size(); i++){
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }

    return maxSum;
}


int main(){
    int num;
    cout<<"Enter size of array " << endl;
    cin>>num;

    vector<int>arr(num);
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }

    cout<<"Max Sum: "<<maxSubarray(arr);
}