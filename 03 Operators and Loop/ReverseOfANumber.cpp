/*
Write a program to generate the reverse of a given number N. 
Print the corresponding reverse number.

Note : If a number has trailing zeros, then its reverse will not include them. 
For e.g., reverse of 10400 will be 401 instead of 00401.
*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int reverse = 0;
    
    while(n > 0){
        int rem = n % 10;
        reverse  = reverse * 10 + rem;

        n = n / 10;
    }

    cout<<reverse<<" ";
}