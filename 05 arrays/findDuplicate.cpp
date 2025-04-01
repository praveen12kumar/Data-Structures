/*
You have been given an integer array/list(ARR) of size N which contains 
numbers from 0 to (N - 2). Each number is present at least once. 
That is, if N = 5, the array/list constitutes values ranging from 0 to 3 
and among these, there is a single integer value that is present twice. 
You need to find and return that duplicate number present in the array.
*/

/*
9
0 7 2 5 4 7 1 3 6
Sample Output 1:
7

7
0 3 1 5 4 3 2
Sample Output 2:
3
*/

#include <iostream>
using namespace std;


// brute force

// int findDuplicate(int *arr, int n){
//     int result = -1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(arr[i] == arr[j] && i != j){
//                 result = arr[i];
//             }
//         }
//     }
//     return result;
// }

// optimized

// sort the array and loop of i and i+1 element

// more optimized

int findDuplicate(int *arr, int n){
    int result = 0;
    int res[n-1] = {0};

    for(int i = 0; i < n; i++){
        res[arr[i]] += 1;
    }

    for(int i = 0; i < n-1; i++){
        if(res[i] > 1){
            result = i;
        }
    }

    return result;
}


// Optimal

// int findDuplicate(int *arr, int n){

//     int result = 0;

//     for(int i = 0; i < n; i++){
//         result = result ^ arr[i];
//     }
//     return result;
// }

int main(){
    int num;
    cin >> num;

    int arr[num];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }

    int result = findDuplicate(arr, num);
    
    cout << "output: "<< result;
}