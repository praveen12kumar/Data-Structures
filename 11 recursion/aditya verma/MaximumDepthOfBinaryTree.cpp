/*
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the 
longest path from the root node down to the farthest leaf node.

Input: root = [3,9,20,null,null,15,7]
Output: 3

*/

#include<iostream>
using namespace std;

struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };


int maxDepth(TreeNode* root) {
    if(root == NULL)
        return 0;
    
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    return 1 + max(left, right);
}