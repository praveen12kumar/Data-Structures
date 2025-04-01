/*
    Create a function that determines whether a given number N belongs 
    to the Fibonacci sequence. If N is found in the Fibonacci sequence, 
    the function should return true; otherwise, it should return false.
*/

#include <iostream>
using namespace std;

bool main(){
    int num; 
    cin >> num;

    int first = 0, second = 1, next = 0;

    while( next <= num){
        next = first + second;
        first = second;
        second = next;

        if(next == num){
            return true;
        }
    }

    return false;
}