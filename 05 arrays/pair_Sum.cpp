/*
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
Note:
Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.
1 2 3 4 5
5
Sample Output 1:
1 4
2 3
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>findPair(vector<int>& arr, int K){
    vector<vector<int>>ans;
    map<int, int>mp;

    for(int i = 0; i < arr.size(); i++){
        int ele = arr[i];
        int target = K - ele;

        if(mp.find(target) != mp.end()){
            int count = mp[target];

            for(int i = 0; i < count; i++){
                vector<int>temp;
                temp.push_back(min(ele, target));
                temp.push_back(max(ele, target));
                ans.push_back(temp);
            }
        }
        mp[arr[i]]++;
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int num;
    cout<<"Enter size of array " << endl;
    cin>>num;

    vector<int>arr(num);
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }

    int K;
    cout<<"Enter sum: ";
    cin>>K;

    vector<vector<int>>res = findPair(arr, K);

    for(auto it: res){
        for(auto i: it){
            cout<<i <<" ";
            cout<<endl;
        }
    }

}