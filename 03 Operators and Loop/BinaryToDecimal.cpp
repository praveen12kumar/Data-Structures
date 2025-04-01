/*
Given a binary number as an integer N, convert it into decimal and print.
*/

#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter Binary Number: ";
    cin>>num;
    int decimal = 0;
    int n = 0;

    while(num){
        int rem = num % 10;

        decimal += rem * pow(2, n); 
        n++;

        num = num / 10;
    }

    cout<<decimal<<endl;
    
}