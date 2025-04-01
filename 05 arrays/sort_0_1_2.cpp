/*
You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. 
Write a solution to sort this array/list in a 'single scan'.

'Single Scan' refers to iterating over the array/list just once or to put it in other words, 
you will be visiting each element in the array/list just once.

Note:
1. You need to change in the given array/list itself. Hence, no need to return or print anything. 
2. You are not allowed to sort the list/array directly.

Input format :
7
0 1 2 0 2 0 1

Output format :
0 0 0 1 1 2 2
*/

#include <iostream>
using namespace std;

void sortZeroOneAndTwo(int *arr, int n){
    int start = 0, end = n-1, mid = 0;

    while(mid <= end){
        if(arr[mid] == 0){
            swap(arr[start++], arr[mid]);
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[end--]);
        }
    }
}

int main(){

    int n; 
    cout<<"Enter size of array: ";   
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sortZeroOneAndTwo(arr, n);
    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}