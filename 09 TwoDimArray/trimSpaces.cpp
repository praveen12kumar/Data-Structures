/*
Given an input string S that contains multiple words, you need to remove all 
the spaces present in the input string.

There can be multiple spaces present after any word.

Sample Input :
abc def g hi
Sample Output :
abcdefghi

*/

#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char *input) {

    int n = strlen(input);
    int j = 0;

    for(int i = 0; i < n; i++){
        if(input[i] != ' '){
            input[j++] = input[i];
        }
    }
    //input[j] = '\0';
}

int main(){
    int size = 1e6;
    char input[size];
    cout<<"Entry string: "<<endl;
    cin.getline(input, size);
    
    trimSpaces(input);
    cout<<"Output: "<<input;

    return 0;
}