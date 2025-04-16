/*
Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.

First index means, the index of first occurrence of x in the input array.

Do this recursively. Indexing in the array starts from 0.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 10^3

Sample Input :
4
9 8 10 8
8
Sample Output :
1
*/

#include <iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
    if(size == 0){
        return -1;
    }

    if(input[0] == x){
        return 0;
    }

    int ans = firstIndex(input + 1, size - 1, x);
    if(ans == -1){
        return -1;
    }

    return ans + 1;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter array elements: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter number: ";
    cin>>x;

    cout<<"Output: "<<firstIndex(arr, size, x);

}