/*
Bubble Sort is a simple algorithm that works by repeatedly swapping adjacent elements 
if they’re in the wrong order.

It “bubbles” the largest (or smallest) element to the correct position in each pass.

arr: [5, 3, 8, 4, 2]
Pass 1:
Compare 5 and 3 → swap → [3, 5, 8, 4, 2]
Compare 5 and 8 → OK
Compare 8 and 4 → swap → [3, 5, 4, 8, 2]
Compare 8 and 2 → swap → [3, 5, 4, 2, 8]

→ Largest number (8) is now at the end ✅
Pass 2:
Do the same thing for the rest → keep bubbling the next largest...

*/

#include <iostream>
using namespace std;

// brute force

// void bubbleSort(int *arr, int n){

//     for(int i = 0; i < n-1; i++){

//         for(int j = 0; j < n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }


// we can do optimization
// In each pass, Bubble Sort compares adjacent elements and swaps them if needed.
//The swapped variable checks:
//Was at least one swap done in this pass?
//If no swaps were made, the array is already sorted, and there's no need to keep looping.



void bubbleSort(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
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

    bubbleSort(arr, n);

    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}