/*
Given a number N, find its square root. You need to find and print only the 
integral part of square root of N.

For eg. if number given is 18, answer is 4.
*/

#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    int i = 1;
    while( i  * i <= num){
        i++;
    }

    cout <<i - 1;

}