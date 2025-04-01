/*
You have been given an integer array/list(ARR) and a number X. 
Find and return the total number of pairs in the array/list which sum to X.

Note:
Given array/list can contain duplicate elements. 

Input format :
9
1 3 6 2 5 4 3 2 4
output format :
7

*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// brute force
int findPairs(int arr[], int n, int x) {

    int count = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = arr[i];
        for(int j = i + 1; j < n; j++){
            if(sum + arr[j] == x ){
                count++;
            }
        }
    }

    return count;
}

// optimized

int findPairs(int arr[], int n, int x) {

    int count = 0;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    
}

int main(){
    int num;
    cout<<"Enter number of elements: "<<endl;
    cin>>num;

    int arr[num];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }

    int sum;
    cout<<"Enter sum: "<<endl;
    cin>>sum;

    int pairs = findPairs(arr, num, sum);
    cout<<"Number of pairs: "<<pairs<<endl;
}