/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr, int K){
    vector<int>ans;
    map<int, int>mp;

    for(int i = 0; i < arr.size(); i++){
        int ele = arr[i];
        int req = K - ele;

        if(mp.find(req) != mp.end()){
            ans.push_back(i);
            ans.push_back(mp[req]);
            break;
        }

        mp[arr[i]] = i;
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int num;
    cout<<"Enter size of array: ";
    cin>>num;

    vector<int>nums(num);
    cout<<"Enter elements: "<<endl;
    for(int i = 0; i < num; i++){
        cin>>nums[i];
    }

    int sum;
    cout<<"Enter sum: ";
    cin>>sum;

    vector<int>ans = twoSum(nums, sum);

    for(auto it: ans){
        cout<<it<<" ";
    }

    return 0;
}