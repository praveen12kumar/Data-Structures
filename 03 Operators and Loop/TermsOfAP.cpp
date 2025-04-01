/*
Write a program to print the first x terms of the mathematical series 3N + 2 
which are not multiples of 4.
The series is defined as:
T(N) = 3N + 2, where N is a positive integer starting from 1. 
Your task is to print the first x terms of this series, but you should exclude any term 
that is a multiple of 4.
*/

#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    for(int i = 1; i <= x; i++){
        if( (3 * i + 2) % 4 != 0){
            cout<<3 * i + 2<<" ";
        }
        else{
            x++;
        }
        
    }

    return 0;
}