/*
Write a program that asks the user for a number N and a choice C. 
And then give them the possibility to choose between computing the 
sum and computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
*/

#include <iostream>
using namespace std;

int main(){

    int n, c, sum = 0, product = 1;
    cout<<"Enter a number: "; 
    cin>>n;

    cout<<"Enter a choice: ";
    cout<<"1 for sum: "<<endl;
    cout<<"2 for product: "<<endl;
    cin>>c;

    for(int i = 1; i <= n; i++){
        if(c == 1){
            sum += i;
        }
        else if(c == 2){
            product *= i;
        }
        else{
            cout<<"-1";
            return 0;
        }
    }

    if(c == 1){
        cout<<sum;
    }
    if(c == 2){
        cout<<product;
    }

}