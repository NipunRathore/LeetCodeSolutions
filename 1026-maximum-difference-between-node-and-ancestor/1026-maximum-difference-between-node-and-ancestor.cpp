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
    void solve(TreeNode *root, int mini, int maxi, int &ans)
    {
        if (root == NULL)
        {
            return ; 
        }
        // while traversing maintain the maximum and minimum values & use them to find the maximum difference 
        mini = min (root -> val, mini) ; 
        maxi = max (root -> val, maxi) ;
        ans = max (ans, abs(maxi - mini)) ;
         
        solve(root -> left, mini, maxi, ans) ; 
        solve(root -> right, mini, maxi, ans) ; 
    }

    int maxAncestorDiff(TreeNode* root) {
        int ans = 0 ; 
        int mini = root -> val ; 
        int maxi = root -> val ; 
        solve(root, mini, maxi, ans) ; 
        return ans ; 
    }
};
// T.C. = O(N)
// S.C. = O(N), recursive (function call stack)