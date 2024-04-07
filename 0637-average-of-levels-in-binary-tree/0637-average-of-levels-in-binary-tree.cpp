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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans ; 
        queue<TreeNode*> q ; 

        if (!root)
        {
            return {} ; 
        }

        q.push(root) ; 
        while(!q.empty())
        {
            double avg = 0 ;
            double sum = 0 ;
            int size = q.size() ;

            for(int i = 0 ; i < size ; i ++)
            {
                TreeNode *temp = q.front() ;
                sum += temp -> val ;
                q.pop() ;

                if(temp -> left != NULL)
                {
                    q.push(temp -> left) ; 
                }
                if(temp -> right != NULL)
                {
                    q.push(temp -> right) ;
                }
            }
            avg = sum / size ;
            ans.push_back(avg) ;
        }
        return ans ;
    }
};