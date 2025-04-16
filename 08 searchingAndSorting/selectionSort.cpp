/*
Selection Sort is a comparison-based sorting algorithm that works by repeatedly 
selecting the smallest (or largest) element from the unsorted part of the list 
and moving it to the beginning.

How it works (Step-by-Step):
Let’s say you have an array:

[29, 10, 14, 37, 13]
Find the smallest number in the whole array → 10

Swap it with the first element → [10, 29, 14, 37, 13]

Now, look at the rest → [29, 14, 37, 13]

Smallest is 13 → swap with 2nd element → [10, 13, 14, 37, 29]

Keep going...

Complexity:
Time Complexity: O(n^2) for all cases
Space Complexity: O(1)

*/

#include <iostream>
#include<climits>
using namespace std;

void selectionSort(int *arr, int n){

    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, n);

    cout<<"Sorted array: ";

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}