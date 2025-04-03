/*
Given an array of integers arr[]  and a number k. 
Return the maximum sum of a subarray of size k.

Note: A subarray is a contiguous part of any given array.

Input: arr[] = [100, 200, 300, 400] , k = 2
Output: 700
Explanation: arr3  + arr4 = 700, which is maximum.

*/

#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int>&arr, int n, int k) {
    int maximum = INT_MIN;
    int sum = 0;
    int i = 0;
    while(i < k){
        sum += arr[i];
    }
    maximum = sum;

    while(i < n){
        sum += arr[i++] - arr[i-k];
        maximum = max(maximum, sum);
    }

    return maximum;

}

int main(){
    vector<int>arr;
    int n, k;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter value of k: ";
    cin>>k;

    cout<<"Output: "<<maxSumSubarray(arr, n, k);
}