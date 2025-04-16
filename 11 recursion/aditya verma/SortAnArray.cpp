/*
Given a random array arr of numbers, please return them in ascending sorted order. 
Note: Use Inbuilt functions to Sort the given array

Input: arr[] = [1, 5, 3, 2]
Output: [1, 2, 3, 5]
Explanation: After sorting array will be like [1, 2, 3, 5].

*/


#include <bits/stdc++.h>
#include<iostream>
using namespace std;


void insert(vector<int>&arr, int temp){
    if(arr.size() == 0 || arr[arr.size()-1] <= temp){
        arr.push_back(temp);
        return;
    }

    int val = arr[arr.size()-1];
    arr.pop_back();

    insert(arr, temp);

    arr.push_back(val);
}



void sortArray(vector<int>&arr) {
    if(arr.size() == 0 || arr.size() == 1){
        return;
    }

    int temp = arr[arr.size()-1];
    arr.pop_back();

    sortArray(arr);

    insert(arr, temp);

}


int main(){
    int n;
    cout<<"Enter size of array: ";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sortArray(arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

