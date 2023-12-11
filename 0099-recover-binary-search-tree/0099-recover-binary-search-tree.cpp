/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inOrderUtil(TreeNode* root, vector<int> &data)
    {
        if (root == NULL)
        {
            return ;
        }
        // L
        inOrderUtil(root -> left, data) ; 
        // N
        data.push_back(root -> val) ; 
        // R
        inOrderUtil(root -> right, data) ; 
    }

    void recoveryUtil(TreeNode *root, vector<int> &data, int &index)
    {
        if (root == NULL)
        {
            return ; 
        }

        // L
        recoveryUtil(root -> left, data, index) ; 
        // N
        // replace value if not matches
        if (data[index] != root -> val)
        {
            root -> val = data[index] ; 
        }
        index ++ ; 
        // R
        recoveryUtil(root -> right, data, index) ; 
    }

    void recoverTree(TreeNode* root) {
        // vector to store node values of BST & later obtain In Order Traversal by sorting 
        vector<int> data ; 
        inOrderUtil(root, data) ; 

        // sort to get the sorted inorder traversal of actual BST
        sort(data.begin(), data.end()) ; 

        // recover BST by comparing values of nodes & values in sorted array representing BST
        int index = 0 ; 
        recoveryUtil(root, data, index) ; 
    }
};