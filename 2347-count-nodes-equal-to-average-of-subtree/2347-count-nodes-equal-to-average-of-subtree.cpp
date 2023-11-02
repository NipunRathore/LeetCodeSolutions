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

    int sum (TreeNode* root, int &cnt)
    {
        if (root == NULL)
        {
            return 0 ; 
        }
        cnt ++ ;
        // int left = sum(root -> left, cnt) ; 
        // int right = sum(root -> right, cnt) ; 

        // return (root -> val + left + right) ; 
        return (root -> val + sum(root -> left, cnt) + sum(root -> right, cnt)) ; 
    }

    void solve(TreeNode *root, int &ans)
    {
        if(root == NULL)
        {
            return ; 
        }

        int cnt = 0 ; 
        int avg = sum(root, cnt) / cnt ; 

        if (avg == root -> val)
        {
            ans ++ ;
        }

        solve(root -> left, ans) ; 
        solve(root -> right, ans) ; 
    }

    int averageOfSubtree(TreeNode* root) {
        int ans = 0 ; 
        solve(root, ans) ; 
        return ans ; 
    }
};