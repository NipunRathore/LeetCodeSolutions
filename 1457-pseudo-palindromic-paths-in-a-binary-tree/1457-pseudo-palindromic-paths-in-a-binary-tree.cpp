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
void solve(TreeNode *root, unordered_map<int, int>& mp, int &palindromeCnt)
{
    if (root == NULL)
    {
        return ; 
    }

    // increase node frequency in map 
    mp[root -> val] ++ ; 

    if (root -> left == NULL && !root -> right)
    {
        int oddCnt = 0 ; 
        for (auto &[key, value] : mp)
        {
            if (value % 2 != 0)
            {
                oddCnt ++ ; 
            }
        }

        if (oddCnt <= 1)
        {
            palindromeCnt ++ ;
        }
    }
    solve(root -> left, mp, palindromeCnt) ;
    solve(root -> right, mp, palindromeCnt) ;
    
    // decrement node frequency in map when returning
    mp[root -> val] -- ; 
}
    int pseudoPalindromicPaths (TreeNode* root) {
        if (root == NULL)
        {
            return 0 ; 
        }
        int palindromeCnt = 0 ; 
        unordered_map<int, int> mp ; 
        solve(root, mp, palindromeCnt) ; 
        return palindromeCnt ; 
    }
};