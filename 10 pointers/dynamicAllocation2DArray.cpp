// How to create a dynamic array and 2D array


// static array or array with fixed size created at compile time and 
// stack memory is used.

// dynamic array or array with variable size created at run time and
// heap memory is used.


#include <iostream>
using namespace std;

// 1D array

// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int * arr = new int[n];

//     cout<<"Enter elements of array: ";
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }

//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }

//     // it is necessary to free the heap memory

//     delete [] arr;

//     return 0;
// }


// 2D array

int main(){
    int row, col;
    cout<<"Enter number of rows ";
    cin>>row;

    cout<<"Enter number of columns ";
    cin>>col;

    int ** arr = new int*[row];

    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }

    // print the array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // free the heap memory
    for(int i = 0; i < row; i++){
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}