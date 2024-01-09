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
    void inOrderUtil(TreeNode* root, vector<int> &leaf)
    {
        if (!root)
        {
            return ; 
        }

        inOrderUtil (root -> left, leaf) ; 
        if (root -> left == NULL && !root -> right)
        {
            leaf.push_back(root -> val) ; 
        }
        inOrderUtil (root -> right, leaf) ; 
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1 ; 
        vector<int> leaf2 ;

        // store leaf node sequences 
        inOrderUtil (root1, leaf1) ; 
        inOrderUtil (root2, leaf2) ; 

        // return true if both sequences stored are same 
        if (leaf1.size() != leaf2.size())
        {
            return false ;
        }

        for (int i = 0 ; i < leaf1.size() ; i ++)
        {
            if (leaf1[i] == leaf2[i])
            {
                continue ; 
            }
            else return false ;
        }
        return true ; 
    }
};