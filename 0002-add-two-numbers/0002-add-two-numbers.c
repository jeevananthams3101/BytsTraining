/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void addAtEnd(struct ListNode **head, int val)
{
    struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val=val;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        struct ListNode *temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;

    }
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *head=NULL;
    if(l1==NULL && l2==NULL)
        return head;
    int sum=0,carry=0;
    while(1)
    {
        if(l1==NULL && l2==NULL)
            break;
        if(l1!=NULL && l2==NULL)
        {
            sum=(l1->val+carry)%10;
            carry=(l1->val+carry)/10;
            l2=NULL;
            l1=l1->next;
        }
        else if(l1==NULL && l2!=NULL)
        {
            sum=(l2->val+carry)%10;
            carry=(l2->val+carry)/10;
            l1=NULL;
            l2=l2->next;
        }
        else
        {
            sum=(l1->val+l2->val+carry)%10;
            carry=(l1->val+l2->val+carry)/10;
            l1=l1->next;
            l2=l2->next;
        }
        addAtEnd(&head,sum);
        sum=0;
    }
    if(carry==1)
        addAtEnd(&head,carry);
    return head;
}