/*
Given an array of strings strs, group the anagrams together. 
You can return the answer in any order.

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:

There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other

    solution
Create an empty hash map.

For each word:

Sort the word.

Use the sorted word as the key in the hash map.

If the key already exists in the map, append the word to the corresponding group.

If the key doesn’t exist, create a new entry for the key with the current word.

After processing all the words, the hash map will contain all anagram groups.

Extract the anagram groups from the hash map and return them.

*/

#include<bits/stdc++.h>
using namespace std;

// vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string, vector<string>> anagramGroups;
//         vector<vector<string>> result;

//    if(strs.empty()){
//        return result;
//    }

//    for(const string& word: strs){
//        string newWord = word; 
//        sort(newWord.begin(), newWord.end()); 
//        anagramGroups[newWord].push_back(word);
//    }

//    for(const auto& group: anagramGroups){
//        result.push_back(group.second);
//    }

//    return result;
// };


vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramGroups;
    vector<vector<string>> result;

if(strs.empty()){
   return result;
}

for(const string& word: strs){
   int count[26] = {0};

   for(char c: word){
    count[c - 'a']++;
   }

   string key = "";

   for(int i = 0; i < 26; i++){
    key+= to_string(count[i]+'#');
   }

   anagramGroups[key].push_back(word);
}

for(const auto& group: anagramGroups){
   result.push_back(group.second);
}

return result;
};






int main(){
    int n;  // Number of words
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> input;
    cout << "Enter the strings: " << endl;
    
    // Take 'n' strings as input from the user
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        input.push_back(word);
    }

    vector<vector<string>> result = groupAnagrams(input);

    // Print the grouped anagrams
    cout << "Grouped Anagrams: " << endl;
    for (const auto& group : result) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;

}