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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int totalNode=0;
        while(temp!=NULL)
        {
            totalNode++;
            temp=temp->next;
        }
        int needed=totalNode-n+1;
        int count=0;
        temp=head;
        ListNode*prevNode=NULL;
        while(temp!=NULL)
        {
            ListNode* nextNode=temp->next;
            count++;
            if(count==needed)
            {
                if(head==temp)
                {
                    head=nextNode;
                    break;
                }
                else
                {
                    prevNode->next=nextNode;
                    break;
                }
            }
            prevNode=temp;
            temp=nextNode;
        }
        return head;
    }
};
