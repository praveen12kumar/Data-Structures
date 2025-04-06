/*
Given a 2D integer array of size M*N, 
find and print the sum of ith column elements separated by space.

Sample Input 1 :
4 2 
1 2 
3 4 
5 6 
7 8
Sample Output 1 :
16 20
*/

#include <iostream>
using namespace std;

void printSum(int **arr, int noRows, int noCols) {

    for(int i = 0; i < noCols; i++) {
        int sum = 0;
        for(int j = 0; j < noRows; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int main() {
    int m, n;
    cout<<"Enter rows of array :";
    cin>>m;
    cout<<"Enter columns of array :";
    cin>>n;

    int **arr = new int*[m];

    for(int i = 0; i < m; i++) {
        arr[i] = new int[n];
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    
    printSum(arr, m, n);

    return 0;
}

