/*
Given a decimal number (integer N), convert it into binary and print.

*/

#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int decimal;
    cin>>decimal;

    long binary = 0;
    long pow = 1;

    while(decimal > 0){
        int rem = decimal % 2;
        binary += rem * pow;
        decimal = decimal / 2;
        pow *= 10;
    }

    cout<<binary<<endl;


}