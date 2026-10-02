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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int count=0;
        ListNode* head=NULL;
        ListNode* prev=NULL;
        while(l1!=NULL && l2!=NULL)
        {
            int temp=l1->val+l2->val+count;
            ListNode* newNode=NULL;
            if(temp>9)
            {
                newNode=new ListNode();
                newNode->val=temp%10;
                count=temp/10;
            }
            else
            {
                newNode=new ListNode();
                newNode->val=temp;
                count=0;
            }
            if(head==NULL)
            {
                head=newNode;
                prev=newNode;
            }
            else
            {
                prev->next=newNode;
                prev=newNode;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            int temp=l1->val+count;
            ListNode* newNode=NULL;
            if(temp>9)
            {
                newNode=new ListNode();
                newNode->val=temp%10;
                count=temp/10;
            }
            else
            {
                newNode=new ListNode();
                newNode->val=temp;
                count=0;
            }
            if(head==NULL)
            {
                head=newNode;
                prev=newNode;
            }
            else
            {
                prev->next=newNode;
                prev=newNode;
            }
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            int temp=l2->val+count;
            ListNode* newNode=NULL;
            if(temp>9)
            {
                newNode=new ListNode();
                newNode->val=temp%10;
                count=temp/10;
            }
            else
            {
                newNode=new ListNode();
                newNode->val=temp;
                count=0;
            }
            if(head==NULL)
            {
                head=newNode;
                prev=newNode;
            }
            else
            {
                prev->next=newNode;
                prev=newNode;
            }
            l2=l2->next;
        }
    if(count!=0)
    {
        ListNode* newNode=new ListNode();
        newNode->val=count;
        prev->next=newNode;
    }
    return head;
    }
};
