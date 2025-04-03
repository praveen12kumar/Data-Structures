/*
Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. 
Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index). 
The idea here is to represent each array/list as an integer in itself of digits N and M.

You need to find the sum of both the input arrays/list treating them as two integers and 
put the result in another array/list i.e. output array/list will also contain only single digit at every index.

Note:
The sizes N and M can be different. 

Output array/list(of all 0s) has been provided as a function argument. 
Its size will always be one more than the size of the bigger array/list. 
Place 0 at the 0th index if there is no carry. 

input format
3
6 2 4
3
7 5 6
Sample Output 1:
1 3 8 0
*/

#include<iostream>
using namespace std;


void sumOfTwoArrays(int *arr1, int size1, int *arr2, int size2, int *output){
    int carry = 0;
    int k = max(size1, size2);

    int i = size1 - 1;
    int j = size2 - 1;

    while(i >= 0 && j >= 0){
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;
        output[k--] = sum % 10;
        i--;
        j--;
    }

    while(i >= 0){
        int sum = arr1[i] + carry;
        output[k--] = sum % 10;
        carry = sum /10;
        i--;
    }

    while(j >= 0){
        int sum = arr2[j] + carry;
        output[k--] = sum % 10;
        carry = sum/10;
        j--;
    }

    if(carry){
        output[k] = carry;
    }

}


int main(){
    int size1, size2;
    cout<<"Enter the size of array1 ";
    cin>> size1;
    cout<<"Enter elements of array1 "<<endl;
    int arr1[size1];
    for(int i = 0; i < size1; i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of array2 ";
    cin>> size2;
    cout<<"Enter elements of array2" <<endl;
    int arr2[size2];
    for(int i = 0; i < size2; i++){
        cin>>arr2[i];
    }

    int outputsize = 1 + max(size1, size2);
    int *output = new int[outputsize];

    sumOfTwoArrays(arr1, size1, arr2, size2, output);

    cout<<"Output: ";

    for(int i = 0; i < outputsize; i++){
        cout<<output[i]<<" ";
    }


}