/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* solve(Node *node, unordered_map<Node*, Node*> &mp)
    {
        if (node == NULL)
        {
            return NULL ;
        }
        // if copy node not present 
        if (mp.find(node) == mp.end())
        {
            // create clone/copy node 
            mp[node] = new Node (node -> val) ;
            
            // calling cloneUtil/solve function on neighbour nodes 
            for (auto it : node -> neighbors)
            {
                mp[node] -> neighbors.push_back(solve(it, mp)) ;
            }
        }
        // return copy/clone node 
        return mp[node] ;
    }

    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> mp ; 
        return solve(node, mp) ; 
    }
};
// T.C. = O(N)
// S.C. = O(N)