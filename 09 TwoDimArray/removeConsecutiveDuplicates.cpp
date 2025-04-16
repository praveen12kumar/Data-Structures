/*
For a given string(str), remove all the consecutive duplicate characters.

Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"

*/



#include <iostream>
#include <cstring>
using namespace std;


void removeConsecutiveDuplicates(char input[]) 
{
    // Write your code here
    char lastChar = input[0];
    int x = 0;
    for(int i = 1; input[i] != '\0'; i++){
        if(input[i] != lastChar){
            input[x++] = lastChar;
            lastChar = input[i];
        }
    }
    input[x] = lastChar;
    input[x+1] = '\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}