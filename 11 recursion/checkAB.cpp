/*
Suppose you have a string, S, made up of only 'a's and 'b's. 
Write a recursive function that checks if the string was generated using 
the following rules:

a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.
*/

#include <bits/stdc++.h>
using namespace std;

bool checkABHelper(string s, int index) {
    if(s.size() == index) {
        return true;
    }

    if(s[index] != 'a') {
        return false;
    }

    if(s[index + 1] != '\0' && s[index + 2] != '\0'){
        if(s[index + 1] == 'b' && s[index + 2] == 'b') {
            return checkABHelper(s, index + 3);
        }
    }

    return checkABHelper(s, index + 1);

}

bool checkAB(string s) {

    return checkABHelper(s, 0);
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    bool ans = checkAB(s);

    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}