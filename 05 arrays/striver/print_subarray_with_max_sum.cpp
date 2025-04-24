/*
Given an array arr[], the task is to print the subarray having maximum sum.
Examples:
Input: arr[] = {2, 3, -8, 7, -1, 2, 3}
Output: 11
Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> maximumsumSubarray(vector<int> &arr)
{
    //Write your code here
    int maxSum = INT_MIN;
    int currentSum = 0;

    int start = 0;
    int tempstart = 0;
    int end = 0;

    vector<int>ans;

    for(int i = 0; i < arr.size(); i++){
        currentSum += arr[i];

        if(currentSum > maxSum){
            maxSum = currentSum;
            start = tempstart;
            end = i;
        }

        if(currentSum < 0){
            currentSum = 0;
            tempstart = i + 1;
        }
    }

    for(int i = start; i <= end; i++){
        ans.push_back(arr[i]);
    }

    return ans;

}

int main(){
    int num;
    cout<<"Enter size of array: ";
    cin>>num;
    vector<int>arr(num);

    cout<<"Enter elements of array"<<endl;
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }

    vector<int>ans = maximumsumSubarray(arr);

    for(auto it: ans){
        cout<<it<<" ";
    }

    return 0;

    
}