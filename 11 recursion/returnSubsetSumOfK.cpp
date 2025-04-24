/*
Given an array A of size n and an integer K, return all subsets of A which sum to K.

Subsets are of length varying from 0 to n, that contain elements of the array. 
But the order of elements should remain same as in the input array.

Note :
The order of subsets are not important.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= n <= 20

Sample Input :
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output :
3 3
5 1
*/

#include <bits/stdc++.h>
using namespace std;

void helper(vector<int>&input, int index, int K, vector<int>&output, vector<vector<int>>&ans){
    if (input.size() == index) {
        int sum = 0;
        for(int num: output){
            sum += num;
        }

        if(sum == K){
            ans.push_back(output);
        }

        return;
    }

    output.push_back(input[index]);

    helper(input, index + 1, K, output, ans);

    output.pop_back();

    helper(input, index + 1, K, output, ans);
}


vector<vector<int>> subsetSumToK(vector<int>input,  int K){

    vector<vector<int>>ans;
    vector<int>output;

    helper(input, 0, K, output, ans);
    
    return ans;
}

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int>input(n);

    for(int i = 0; i < n; i++){
        cin>>input[i];
    }

    int K;
    cout<<"Enter sum: ";
    cin>>K;

    auto c = subsetSumToK(input, K);

    for(auto val : c) {
        for(auto vall : val) cout << vall << ' ';
        cout << '\n';
    }
}