/*
You have been given a random integer array/list(ARR) of size N. 
Write a function that rotates the given array/list by D elements(towards the left).

 Note:
Change in the input array/list itself.You don't need to return or print the elements.
Sample Input :
7
1 2 3 4 5 6 7
2
Sample Output :
3 4 5 6 7 1 2
*/

#include <iostream>
using namespace std;

void rotate(int *arr, int start, int end){
    while(start < end){
        swap(arr[start++], arr[end--]);
    }
}

void rotateArray(int arr[], int n, int d) {

    rotate(arr, 0, d-1);
    rotate(arr, d, n-1);
    rotate(arr, 0, n-1);

}

int main(){
    int size, d;
    cout<<"Enter size of array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"Enter the value of d: "<<endl;
    cin>>d;

    rotateArray(arr, size, d);

    cout<<"Output: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}