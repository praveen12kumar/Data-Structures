/*
Given an integer sorted array (sorted in increasing order) and an element x, 
find the x in given array using binary search. Return the index of x.

Return -1 if x is not present in the given array. Note : If given array size is even, 
take first mid.

Input format :
Line 1 : Array size
Line 2 : Array elements (separated by space)
Line 3 : x (element to be searched)

6
2 3 4 5 6 8 
5 
Sample Output:
3 

*/

#include <iostream>
using namespace std;

int solve(int input[], int start, int end, int element){
    if(start <= end){
        int mid = start + (end - start )/2;

        if(input[mid] == element){
            return mid;
        }


        if(input[mid] < element){
            solve(input, mid+1, end, element);
        }
        else{
            solve(input, start, mid-1, element);
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int x) {
    return solve(arr, 0, n, x);
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int * arr = new int[n];

    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter number: ";
    cin>>x;

    cout<<"Output: "<<binarySearch(arr, n, x);
    delete [] arr;
    return 0;
}