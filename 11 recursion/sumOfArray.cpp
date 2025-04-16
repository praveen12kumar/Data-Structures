/*
Problem statement
Given an array of length N, you need to find and return the sum of all elements of the array.

Do this recursively.

Sample Input 1 :
9 8 9
Sample Output 1 :
26
*/

#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    if(n == 0){
        return 0;
    }

    return arr[n-1] + sumOfArray(arr, n-1);
}

int main(){
    int num;
    cout<<"Enter size of Array";
    cin>>num;

    int arr[num];
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }

    cout<<sumOfArray(arr, num);
}