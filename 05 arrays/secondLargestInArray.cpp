/*
You have been given a random integer array/list(ARR) of size N. You are required to find and return the
 second largest element present in the array/list.
 Sample Input 1:
5
4 3 10 9 2
Sample Output 1:
9
*/

#include <iostream>
using namespace std;

int secondLargest(int *arr, int n){
    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }

    return secondLargest;

}

int main(){
    int size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"Second largest element is: "<<secondLargest(arr, size);
}