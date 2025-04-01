/*
You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. 
Write a function to sort this array/list. Think of a solution which scans the array/list 
only once and don't require use of an extra array/list.

Note:
You need to change in the given array/list itself. Hence, no need to return or print anything. 

Input format :
0 1 1 0 1 0 1
Output format :
0 0 0 1 1 1 1
*/



#include<iostream>
using namespace std;

// void sortZeroAndOne(int *arr, int n){

//     int start = 0, end = n-1;
//     while(start < end){
//         while(start < n && arr[start] == 0){
//             start++;
//         }

//         while(end >= 0 &&  arr[end] == 1){
//             end--;
//         }

//         if(start < end){
//             swap(arr[start++], arr[end--]);
//         }
//     }
// }

// one more way

void sortZeroAndOne(int *arr, int n){
    
    int start = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            swap(arr[start++], arr[i]);
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
    
    sortZeroAndOne(arr, n);

    cout<<"Sorted array: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}