/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->next=head;
    struct ListNode *fast=temp;
    struct ListNode *slow=temp;

    for(int i=1;i<=n;i++)
    {
        fast=fast->next;
    }
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return temp->next;
}