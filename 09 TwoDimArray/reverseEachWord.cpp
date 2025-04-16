/*
Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to change the sentence such that each word in the sentence is reversed. A word is a combination of characters without any spaces.

Example:
Input Sentence: "Hello I am Aadil"
The expected output will look, "olleH I ma lidaA".
*/

#include <iostream>
#include <cstring>
using namespace std;

void reverse(char input[], int start, int end) {
    while(start < end) {
        swap(input[start++], input[end--]);
    }
}


void reverseEachWord(char str[]) {

    int n = strlen(str);
    int start = 0, end = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == ' '){
            reverse(str, start, i-1);
            start = i+1;
        }
    }
    reverse(str, start, n-1);

}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}