/*
    You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) 
    and then rotated by some number 'K' (K is greater than 0) in the right hand direction.
    Your task is to write a function that returns the value of 'K', that means, 
    the index from which the array/list has been rotated.

Sample Input 2:
2
5
3 6 8 9 10
4
10 20 30 1
Sample Output 2:
0
3
*/

#include <iostream>
using namespace std;

int arrayRotation(int*arr, int n){
    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
            return i;
        }
    }
    return 0;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout<<"Enter array elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int result = arrayRotation(arr, size);

    cout<<"Output: "<<result;
}