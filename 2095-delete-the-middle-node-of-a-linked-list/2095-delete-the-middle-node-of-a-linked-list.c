/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deletenode(struct ListNode* node)
{
    node->val=node->next->val;
    node->next=node->next->next;
}
struct ListNode* deleteMiddle(struct ListNode* head){
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return NULL;
        }
        if(head->next->next==NULL)
        {
            head->next=NULL;
            return head;
        }
        struct ListNode *temp=head;
        int size=0;
        while(temp)
        {
            size+=1;
            temp=temp->next;
        }
        temp=head;
        int c=0;
        while(1)
        {
            if(c==size/2)
            {
                break;
            }
            c+=1;
            temp=temp->next;
        }
        deletenode(temp);
        return head;
}