class Solution
{
public:
    int length(ListNode *head)
    {
        if (head == NULL)
        {
            return 0 ;
        }

        int count = 0 ;
        while (head != NULL)
        {
            count ++ ;
            head = head -> next ;
        }

        return count ;
    }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL)
        {
            return head ;
        }

        int len = length(head) ;
        if (n == len)
        {
            return head -> next ; 
        }

        if (n > len)
        {
            return head ;
        }

        ListNode *temp = head ;
        int count = 1 ;

        while (temp != NULL && count < len - n)
        {
            temp = temp -> next ;
            count ++ ;
        }

        temp -> next = temp -> next -> next ;

        return head ;
    }
};