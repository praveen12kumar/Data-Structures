/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters.

Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards
Sample Input 1 :
abcdcba
Sample Output 1 :
true 
*/

#include <iostream>
#include <cstring>
using namespace std;


bool checkPalindrome(char str[]) {
    int i = 0, j = strlen(str) -1;

    while(i <= j){
        if(str[i++] != str[j--])
            return false;
    }

    return true;
}

int main() {
    int size = 1e6;
    char input[size];
    cin >> input;
    
    cout<<"Output: "<<checkPalindrome(input);

    return 0;
}