/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // Store data of linked list in an array 
    // Find NEXT GREATER ELEMENT in that array 
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr ; 
        ListNode* temp = head ;

        // store data of LL in 'arr' array
        while (temp != NULL)
        {
            arr.push_back(temp -> val) ; 
            temp = temp -> next ; 
        }

        // find next greater element 
        // optimally using stack
        stack<int> s; 
        s.push(0) ; 

        int n = arr.size() ; 
        vector<int> ans(n) ;
    
        for (int i = n - 1 ; i >= 0 ; i --)
        {
            int curr = arr[i] ; 
            while (s.top() <= curr)
            {
                if (s.top() == 0)
                {
                    break ;
                }
                s.pop() ; 
            }
            ans[i] = s.top() ;
            s.push(curr) ; 
        }
        return ans ;
    }
};