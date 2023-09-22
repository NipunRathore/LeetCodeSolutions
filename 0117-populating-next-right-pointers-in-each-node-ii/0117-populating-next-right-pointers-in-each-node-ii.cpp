/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
// Same as Question 116
    Node* connect(Node* root) {
        if (root == NULL)
        {
            return root ;
        }

        queue<Node*> q ; 
        q.push(root) ; 

        while (!q.empty())
        {
            // queue contains all nodes of a particular level 
            Node *prev = NULL ; 
            // at each level initialize prev with NULL
            int size = q.size() ; 

            while (size --)
            {
                Node *curr = q.front() ; 
                q.pop() ; 

                if (curr -> left != NULL)
                {
                    q.push(curr -> left) ; 
                }

                if (curr -> right)
                {
                    q.push(curr -> right) ; 
                }
                
                // if PREV is non null then connect it's next to CURR
                if (prev != NULL)
                {
                    prev -> next = curr ;
                }
                prev = curr ; 
            }
        }
        return root ;
    }
};