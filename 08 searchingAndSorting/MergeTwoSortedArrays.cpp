/*
You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively,
 merge them into a third array/list such that the third array is also sorted.
 Input:
1 3 4 7 11
4
2 4 6 13
Sample Output 1 :
1 2 3 4 4 6 7 11 13 
*/
#include <iostream>
#include <vector>
using namespace std;

void mergeTwoSortedArrays(vector<int>& arr1, vector<int>& arr2, vector<int>& res, int n, int m) {
    int i = 0, j = 0, k = 0;

    while(i < n && j < m) {
        if(arr1[i] <= arr2[j]) {
            res[k++] = arr1[i++];
        }
        else {
            res[k++] = arr2[j++];
        }
    }

    while(i < n) {
        res[k++] = arr1[i++];
    }

    while(j < m) {
        res[k++] = arr2[j++];
    }
}

int main() {
    int n, m;
    cout << "Enter size of array 1: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter array 1: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of array 2: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter array 2: ";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> res(n + m);
    mergeTwoSortedArrays(arr1, arr2, res, n, m);

    cout << "Merged array: ";
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
