/*
Given a string s, you need to print all possible strings that can be made by placing spaces (zero or one) in between them. 
The output should be printed in sorted increasing order of strings.

Input:
s = "ABC"
Output: (A B C)(A BC)(AB C)(ABC)
Explanation:
ABC
AB C
A BC
A B C
These are the possible combination of "ABC".

*/

#include <bits/stdc++.h>
using namespace std;

void helper(string st, string output, vector<string>&ans){
    if(st.size() == 0){
        ans.push_back(output);
        return;
    }
    
    string op1 = output;
    string op2 = output;
    
    
    op1.push_back(' ');
    op1.push_back(st[0]);
    
    op2.push_back(st[0]);
    
    st.erase(st.begin() + 0);
    
    helper(st, op1, ans);
    helper(st, op2, ans);
}


vector<string> permutation(string s) {
    // Code Here
    string output = "";
    output.push_back(s[0]);
    
    s.erase(s.begin() + 0);
    vector<string> ans;
    
    helper(s, output, ans);
    
    return ans;
}


int main(){
    string s = "";
    cout<<"Enter string: ";
    cin>>s;
    
    vector<string> ans = permutation(s);
    
    for(auto it: ans){
        cout<<it<<endl;
    }

    return 0;
}