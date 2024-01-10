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
// BURN BINARY TREE
// Step 1 : Create node to parent mapping 
// Step 2 : Reach target node 
// Step 3 : Burn neighbours and find minimum time 

// We use this function to find the target node as well as create mapping 
TreeNode* createParentMapping (TreeNode* root, int target, map<TreeNode*, TreeNode*> &nodeToParent)
{
    //   this function creates ampping and returns the target node 
    TreeNode* result = NULL ; 
    
    queue<TreeNode*> q ; 
    q.push(root) ; 
    // parent of root node is -1 or NULL
    // since map is of node type therefore NULL 
    nodeToParent[root] = NULL ; 
    
    while (!q.empty())
    {
        TreeNode* front = q.front() ; 
        q.pop() ; 
        
        // to reach the target node 
        if (front -> val == target)
        {
            result = front ; 
        }
        
        if (front -> left)
        {
            nodeToParent[front -> left] = front ; 
            q.push(front -> left) ; 
        }
        
        if (front -> right)
        {
            nodeToParent[front -> right] = front ; 
            q.push(front -> right) ; 
        }
    }
    return result ; 
}

int burnTree(TreeNode *root, map<TreeNode*, TreeNode*> &nodeToParent)
{
    // 2 data structures needed -> VISITED AND QUEUE FOR BFS 
    map<TreeNode*, bool> visited; 
    queue<TreeNode*> q ;

    q.push(root) ; 
    visited[root] = true ; 
    int ans = 0 ;
    while (!q.empty())
    {
    // flag to know if any addition made into the queue 
    // if yes then timer increment 
    // else no increment 
        bool flag = 0 ; 
        int size = q.size() ; 
        for (int i = 0 ; i < size ; i ++)
        {
            TreeNode *front = q.front() ; 
            q.pop() ; 
            
            if (front -> left && visited[front -> left] == false)
            { 
                q.push(front -> left) ; 
                visited[front -> left] = true ; 
                flag = true ; 
            }
            if (front -> right && visited[front -> right] == false)
            {
                q.push(front -> right) ; 
                visited[front -> right] = true ; 
                flag = true ;
            }
            
            if (nodeToParent[front] && !visited[nodeToParent[front]])
            {
                q.push(nodeToParent[front]) ; 
                visited[nodeToParent[front]] = true ; 
                flag = true ; 
            }
        }
        if (flag == 1)
        {
            ans ++ ; 
            flag = 0 ; 
        }
    }
    return ans ; 
}
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*, TreeNode*> nodeToParent ; 
        
        TreeNode* targetNode = createParentMapping(root, start, nodeToParent) ; 
        
        int ans = burnTree(targetNode, nodeToParent) ; 
        
        return ans ; 
    }
};