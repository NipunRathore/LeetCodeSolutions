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
    bool isEvenOddTree(TreeNode* root) {
        if (root == NULL)
        {
            return true ; 
        }

        // store {node, level} pair 
        queue<pair<TreeNode*, int> > q ; 
        q.push({root, 0}) ; 

        while (!q.empty())
        {
            // size -> total nodes in current levle 
            int size = q.size() ; 
            // set preVal to 0 at the beginning of each level
            int preVal = 0 ; 

            // process all nodes of current level 
            for (int i = 0 ; i < size ; i ++)
            {
                pair<TreeNode*, int> temp = q.front() ; 
                q.pop() ; 

                TreeNode* front = temp.first ; 
                int level = temp.second ; 
                int currVal = front -> val ; 

                // even level 
                if (level % 2 == 0)
                {
                    // values should be strictly increasing so return false if currVal is less than or equal to prevVal 
                    if (i > 0 && currVal <= preVal)
                    {
                        return false ; 
                    }
                    // should have odd integer values, so return false if even
                    if (currVal % 2 == 0)
                    {
                        return false ; 
                    }
                }
                // odd level 
                else
                {
                    // values should be strictly decreasing so return false if currVal is greater than or equal to prevVal 
                    if (i > 0 && currVal >= preVal)
                    {
                        return false ; 
                    }
                    // should have even integer values, so return false if odd
                    if (currVal % 2 == 1)
                    {
                        return false ; 
                    }
                }

                if (front -> left)
                {
                    q.push({front -> left, level + 1}) ;
                }

                if (front -> right)
                {
                    q.push({front -> right, level + 1}) ; 
                }
                
                // update prevVal for next iteration in this same level 
                preVal = currVal ; 
            }
        }
        return true ; 
    }
};