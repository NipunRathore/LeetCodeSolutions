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
// BFS Approach
    vector<int> largestValues(TreeNode* root) {
        // if root is NULL, return empty vector
        if (root == NULL)
        {
            return {} ; 
        }
        
        queue<TreeNode*> q ; 
        q.push(root) ; 

        // vector to store answer i.e., largest value in each row 
        vector<int> ans ; 

        while (!q.empty())
        {
            int size = q.size() ; 
            int maxi = INT_MIN ; 

            // queue contains only nodes of one particular level when program is here
            // process all nodes of current level 
            while (size --)
            {
                TreeNode *temp = q.front() ; 
                q.pop() ; 

                if (temp -> left)
                {
                    q.push(temp -> left) ;
                }

                if (temp -> right)
                {
                    q.push(temp -> right) ; 
                }

                // find maximum by comparing with each element of the current level 
                maxi = max (maxi, temp -> val) ; 
            }
            // after processing all nodes in a level, store the max value node in resultant vector
            ans.push_back(maxi) ;
        }
        return ans ; 
    }
};