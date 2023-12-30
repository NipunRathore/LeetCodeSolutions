/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) 
        {
            return NULL ;
        }

        ListNode* temp1 = headA ;
        ListNode* temp2 = headB ;

        while (temp1 != temp2) 
        {
            // if temp1 is not NULL, move to the next node 
            // else set temp1 to headB
            if (temp1 != NULL)
            {
                temp1 = temp1 -> next ; 
            }
            else 
            {
                temp1 = headB ; 
            }
            
            // if temp2 is not NULL, move to the next node
            // else set temp2 to headA
            if (temp2 != NULL)
            {
                temp2 = temp2 -> next ;
            }
            else
            {
                temp2 = headA ; 
            }
        }
        
        return temp1 ;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if (headA == NULL || headB == NULL)
//         {
//             return NULL ; 
//         }

//         unordered_set<ListNode*> st ; 
//         ListNode* temp1 = headA ; 
//         while (temp1 != NULL)
//         {
//             st.insert(temp1) ; 
//             temp1 = temp1 -> next ;
//         }

//         ListNode* temp2 = headB ; 
//         while (temp2 != NULL)
//         {
//             if (st.find(temp2) != st.end())
//             {
//                 return temp2 ; 
//             }
//             temp2 = temp2 -> next ; 
//         }
//         return NULL ; 
//     }
// };