/*
For a given a string(str), find and return the highest occurring character.
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, return the character which comes first.

*/

#include <iostream>
#include <cstring>
using namespace std;


char highestOccurringChar(char input[]) {
    // Write your code here
    
    int count[26] = {0};
    
    for(int i = 0; input[i] != '\0'; i++){
        count[input[i] - 'a']++;
    }

    int maxIndex = 0;

    for(int i = 0; i < 26; i++ ){
        if(count[i] > count[maxIndex]){
            maxIndex = i;
        }
    }

    cout<<"Output: "<<endl;
    return ('a' + maxIndex);
    
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}