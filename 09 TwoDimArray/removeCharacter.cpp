/*
For a given a string(str) and a character X, write a function to remove all the occurrences 
of X from the given string.

The input string will remain unchanged if the given character(X) 
doesn't exist in the input string.

Sample Input 1:
aabccbaa
a
Sample Output 1:
bccb

*/


#include<iostream>
#include<cstring>
using namespace std;
void removeCharacter(char input[], char c) {
    int j = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        if(input[i] != c) {
            swap(input[i], input[j++]);
        }
    }
    input[j] = '\0';
}


int main(){
    int size = 1e6;
    char input[size];
    cout<<"Entry string: "<<endl;
    cin >> input;
    char c;
    cout<<"Enter character to be removed: "<<endl;
    cin >> c;
    removeCharacter(input, c);
    cout << input;
}