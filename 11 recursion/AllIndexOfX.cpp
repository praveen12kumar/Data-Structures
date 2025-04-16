/*
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in the output array (in increasing order).

Do this recursively. Indexing in the array starts from 0.

Hint:
Try making a helper function with the required arguments and call the helper function from the allIndexes function.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 10^3
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
*/

#include <iostream>
using namespace std;

int helper(int input[], int size, int x, int output[], int count, int index) {
    if(index == size){
        return count;
    }

    if(input[index] == x){
        output[count++] = index;
    }

    return helper(input, size, x, output, count, index + 1);
}

int allIndexes(int input[], int size, int x, int output[]) {
    int count = 0;
    return helper(input, size, x, output, count, 0);
}

int main() {
    int size;
    cout<<"Enter size of array: ";
    cin >> size;
    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int x;
    cout<<"Enter number: ";
    cin >> x;

    int *output = new int[size];

    int n = allIndexes(input, size, x, output);

    for(int i = 0; i < n; i++) {
        cout << output[i] << " ";
    };

    delete [] output;
    delete [] input;
}