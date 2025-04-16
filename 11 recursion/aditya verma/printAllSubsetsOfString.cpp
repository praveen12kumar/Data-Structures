/*
Given string is given, print all possible subsets of it. 
Subsets can be printed in any order.

Sample Input 1:
abc
Sample Output 1:
abc
ab
ac
a
bc
b
c   
*/


#include <iostream>
#include <cstring>
using namespace std;

void printSubsets(string input, string output) {

    // base condition
    if(input.size() == 0){
        cout<<output<<endl;
        return;
    }

    string op1 = output;
    string op2 = output;

    op1.push_back(input[0]);
    input.erase(input.begin() + 0);

    printSubsets(input, op1);
    printSubsets(input, op2);

    return;

}

int main() {
    string input;
    cout<<"Enter string: ";
    cin>>input;
    string output = "";
    printSubsets(input, output);

    cout<<endl;
}