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
    // void reverse (ListNode *&head, ListNode *&curr, ListNode *&prev)
    // {
    //     // base case 
    //     if(curr==NULL)
    //     {
    //         head = prev;
    //         return;
    //     }

    //     // solve the problem for the first node and then use recursion
    //     ListNode *forward = curr -> next ; 
    //     curr -> next = prev;
    //     reverse(head, forward, curr);
    // }
    // ListNode* reverseList(ListNode* head) {
    //     // recursive solution 
    //     // ListNode *forward= NULL;
    //     ListNode *prev = NULL;
    //     ListNode *curr = head;

    //     reverse(head, curr, prev);
    //     return head;
    // }
    
    ListNode *reverseList(ListNode *head)
    {
        // forward pointer taken becuase we need one pointer on the linked list to access it, prev and curr will be insufficient to do it alone
        ListNode *prev = NULL; 
        ListNode *curr = head; 
        ListNode *forward = NULL;

        // if linked list is empty or there is only one node then we return head 
        if (head == NULL || head -> next == NULL)
        {
            return head ;
        }
        else
        {
            while (curr != NULL)
            {
                forward = curr -> next ; 
                curr -> next = prev; 
                prev = curr; 
                curr = forward ; 
            }
        }
        // in the end curr is on NULL and prev is on the new head, which was originally the last node of the linked list so we return prev
        return prev;
    }
};