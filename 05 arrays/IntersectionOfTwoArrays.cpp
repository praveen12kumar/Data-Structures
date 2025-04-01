/*
You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. 
You need to print their intersection; An intersection for this problem can be defined 
when both the arrays/lists contain a particular value or to put it in other words, 
when there is a common value that exists in both the arrays/lists.

Note :
Input arrays/lists can contain duplicate elements.

The intersection elements printed would be in the order they appear in the first array/list(ARR1)

6
2 6 8 5 4 3
4
2 4 1 7
Sample Output 1:
2 4

4
2 6 1 2
5
1 2 3 4 2
Sample Output 2:
2 1 2

*/


#include <iostream>
#include <climits>
using namespace std;

void findIntersection(int arr1[], int arr2[], int n, int m) {

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                arr2[j] = INT_MAX;
                break;
            }
        }
    }
}


int main() {
    int n, m;
    cin >> n >> m;

    int arr1[n];
    cout << "Enter array 1: ";
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int arr2[m];
    cout<< "Enter array 2: ";
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    findIntersection(arr1, arr2, n, m);
}