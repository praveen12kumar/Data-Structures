/*
You are given an integer array 'A' of size 'N', sorted in non-decreasing order. 
You are also given an integer 'target'. Your task is to write a function to search for 'target' in the array 'A'. 
If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1.

Sample Input 1:
7
1 3 7 9 11 12 45
3
Sample Output 1:
1
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0, end = n-1, mid = 0;

    while(start <= end ){

        mid = start + (end - start)/2;

        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;
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

    int target;
    cout<<"Enter target: ";
    cin>>target;

    cout<<"Output: "<<binarySearch(arr, n, target);

    return 0;
}