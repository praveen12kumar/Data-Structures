/*
ou have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros 
that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the 
non-zero elements.

Note:
Change in the input array/list itself. You don't need to return or print the elements.

You need to do this in one scan of array only. Don't use extra space.

Input format :
7
2 0 0 1 3 0 0
Sample Output 1:
2 1 3 0 0 0 0
*/

#include <iostream>
using namespace std;


// brute force 
// count the number of zeros in first iteration
// take a new array and copy the non-zero elements in it
// copy the zeros in the end

// optimal

void pushZeroToEnd(int *arr, int size){
    int i = 0, j = 0;

    while(i < size && j < size){
        if(arr[i] != 0){
            swap(arr[i++], arr[j++]);
        }
        else{
            i++;
        }
    }

}

void main(){
    int size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    pushZeroToEnd(arr, size);

    cout<<"Output: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }


}