/*
Valid anagram

Given two strings s and t, return true if t is an anagram of s, and false otherwise.
Input: s = "anagram", t = "nagaram"
Output: true;


*/

#include <iostream>
using namespace std;
#include<string.h>

bool isAnagram(string s, string t) {
    if(s.size() != t.size()){
        return false;
    }
    int count[26] = {0};

    for(int i = 0; i < s.size(); i++){
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    
    string s, t;
    cout<<"Enter first string: ";
    cin>>s;

    cout<<"Enter second string: ";
    cin>>t;

    cout<<"Output: ";
    cout<<isAnagram(s, t);
}