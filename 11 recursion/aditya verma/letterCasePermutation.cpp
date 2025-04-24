/*
Given a string s, you can transform every letter individually to be lowercase or uppercase 
to create another string.

Return a list of all possible strings we could create. 
Return the output in any order.

 

Example 1:

Input: s = "a1b2"
Output: ["a1b2","a1B2","A1b2","A1B2"]
Example 2:

Input: s = "3z4"
Output: ["3z4","3Z4"]
*/

#include<bits/stdc++.h>
using namespace std;

void solve(string input, string output, vector<string>&ans){
    if(input.size() == 0){
        ans.push_back(output);
        return;
    }

    string op1 = output;
    string op2 = output;

    if(isalpha(input[0])){
        op1.push_back(tolower(input[0])); // lowercase  
        op2.push_back(toupper(input[0])); // uppercase
    }
    else{
        op1.push_back(input[0]);  // digits don't change cases
        op2.push_back(input[0]); 
    }

    input.erase(input.begin() + 0);

    solve(input, op1, ans);

     // Only call second branch if alphabet to avoid duplicate digit calls
    if(isalpha(op1.back())){
        solve(input, op2, ans);
    }
}

vector<string> letterCasePermutation(string s) {
    vector<string> ans;
    string output = "";
    solve(s, output, ans);
    return ans;
}

int main(){
    string s = "";
    cout<<"Enter string: ";
    cin>>s;
    vector<string> ans = letterCasePermutation(s);
    for(auto it: ans){
        cout<<it<<endl;
    }
}