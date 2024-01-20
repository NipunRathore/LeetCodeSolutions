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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == NULL || head -> next == NULL)
        {
            return head ; 
        }

        ListNode *curr = head -> next ; 
        ListNode *prev = head ; 

        while (curr != NULL)
        {
            ListNode *newNode = new ListNode (gcd(curr -> val, prev -> val)) ; 
            newNode -> next = curr ; 
            prev -> next = newNode ; 
            prev = curr ; 
            curr = curr -> next ; 
        }
        return head ; 
    }
};