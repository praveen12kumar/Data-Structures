/*
Given an input string S and two characters c1 and c2, you need to replace every occurrence 
of character c1 with character c2 in the given string.
Sample Input :
abacd
a x
Sample Output :
xbxcd

*/

#include <iostream>
#include <cstring>
using namespace std;    

void replaceCharacter(char *input, char c1, char c2) {
    int n = strlen(input);

    for(int i = 0; i < n; i++) {
        if(input[i] == c1) {
            input[i] = c2;
        }
    }
}

int main(){
    int size = 1e6;
    char input[size];
    cout<<"Entry string: "<<endl;
    cin >> input;
    char c1, c2;
    cout<<"Characters to be replaced: "<<endl;
    cin >> c1;
    cout<<"Characters to be replaced with: "<<endl;
    cin >> c2;
    replaceCharacter(input, c1, c2);

    cout<<"Output: "<<input;

    return 0;
}