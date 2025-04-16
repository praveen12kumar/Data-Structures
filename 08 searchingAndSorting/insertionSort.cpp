/*
Insertion Sort:
Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. 
It is much more efficient on large lists than other simple quadratic sorting algorithms such as bubble sort or selection sort.

How Insertion Sort Works (Step-by-step):
It starts from the second element (index 1), and compares it with the left elements.
If the left elements are greater, it shifts them to the right.
Then, it inserts the current element into the correct position.

complexity:
Time Complexity: O(n^2) for all cases
Space Complexity: O(1)

*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {

    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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

    insertionSort(arr, n);

    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}