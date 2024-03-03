
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
int get_length(ListNode* &head)
{
    ListNode *temp=head;
    int len=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=1;
        ListNode  *prev=head;
        int len=get_length(head);
        cout<<len;
        if(len==1)
        {
            return NULL;
        }
        if(len==n)
        {
           return head->next; 
        }
        while(i<len-n)
        {
            prev=prev->next;
            i++;
        }
        ListNode  *curr=prev->next;
      
        prev->next=curr->next;
        

        return head;
    }
};
