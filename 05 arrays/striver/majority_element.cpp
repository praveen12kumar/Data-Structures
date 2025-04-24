/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

#include<bits/stdc++.h>
using namespace std;

int findMajority(vector<int>&arr){
    int count = 1;
    int condidate = arr[0];

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != condidate){
            count--;

            if(count == 0){
                condidate = arr[i];
                count = 1;
            }
        }
        else{
            count++;
        }
    }

    return condidate;
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

    cout<<"Majority Element: "<<findMajority(nums);

    return 0;
}