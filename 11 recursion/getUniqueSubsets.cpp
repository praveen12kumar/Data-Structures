/*
ou are given an sorted integer array of size 'n'.

Your task is to find and return all the unique subsets of the input array.

Subsets are arrays of length varying from 0 to 'n', that contain elements of the array. 
But the order of elements should remain the same as in the input array.

Note:
The order of subsets is not important. You can return the subsets in any order. 
However, in the output, you will see the subsets in lexicographically sorted order.


Constraints :
1 <= n <= 15
1 <= arr[i] <= 100

Time Limit: 1 sec
Example:
Input: 'n' = 3, 'arr' = [12, 15, 20]

Output: [[], [12], [12, 15], [12, 15, 20], [12, 20], [15], [15, 20], [20]]
*/


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void getSubsets(vector<int>input, vector<int>output, set<vector<int>>&ans) {

    if (input.size() == 0) {
        sort(output.begin(), output.end()); // Sort for consistent ordering
        ans.insert(output); // Insert into set (automatically removes duplicates)
        return;
    }

    vector<int>op1 = output;
    vector<int>op2 = output;

    op1.push_back(input[0]);
    input.erase(input.begin());

    getSubsets(input, op1, ans);
    getSubsets(input, op2, ans);

    return;

}


vector<vector<int>> getUniqueSubsets(vector<int>& arr) {
    vector<vector<int>>ans;
    set<vector<int>>uniqueset;
    vector<int>temp;
    getSubsets(arr, temp, uniqueset);
    ans.assign(uniqueset.begin(), uniqueset.end());
    return ans;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    auto c = getUniqueSubsets(arr);
    sort(c.begin(), c.end());
    
    for(auto val : c) {
        for(auto vall : val) cout << vall << ' ';
        cout << '\n';
    }

    return 0;

}