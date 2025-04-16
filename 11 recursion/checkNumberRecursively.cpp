/*
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.

Do this recursively.

Detailed explanation ( Input/output format, Notes, Images )

Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true
*/

#include <iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
    if(size == 0){
        return false;
    }

    // if(input[size - 1] == x ){
    //     return true;
    // }

    // return checkNumber(input, size-1, x);

    if(input[0] == x){
        return true;
    }

    return checkNumber(input + 1, size - 1, x);

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

    int x;
    cout<<"Enter number: ";
    cin>>x;

    cout<<"Output: "<<checkNumber(arr, n, x);
}

