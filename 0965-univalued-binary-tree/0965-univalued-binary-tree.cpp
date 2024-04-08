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
    bool isUnivalTree(TreeNode* root) {
        if (!root)
        {
            return false ; 
        }

        vector<int> arr ; 
        queue<TreeNode*> q ; 
        q.push(root) ; 

        while (!q.empty())
        {
            int size = q.size() ; 
            while (size --)
            {
                TreeNode* temp = q.front() ;
                q.pop() ;

                if(temp -> left != NULL)
                {
                    q.push(temp -> left) ;
                }
                if(temp -> right != NULL)
                {
                    q.push(temp -> right) ;
                }
                arr.push_back(temp -> val) ;
            }
        }

        for (int i = 0 ; i < arr.size() - 1 ; i ++)
        {
            if (arr[i] != arr[i + 1])
            {
                return false ; 
            }
        }
        return true ; 
    }
};