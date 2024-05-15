/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> q ; 
        q.push(cloned) ; 
        while (!q.empty())
        {
            int size = q.size() ; 
            for (int i = 0 ; i < size ; i ++)
            {
                TreeNode *front = q.front() ; 
                q.pop() ; 

                if (front -> val == target -> val)
                {
                    return front ; 
                }

                if (front -> left)
                {
                    q.push(front -> left) ; 
                }

                if (front -> right)
                {
                    q.push(front -> right) ; 
                }
            }
        }
        return NULL ; 
    }
};