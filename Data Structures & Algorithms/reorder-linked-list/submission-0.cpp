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
    void reorderList(ListNode* head) {
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int mid = (count + 1) / 2;
        count=0;
        temp=head;
        ListNode *midNode=NULL;
        while(count!=mid)
        {
            count++;
            midNode=temp;
            temp=temp->next;
        }
        midNode->next=NULL;
        ListNode* prevNode=NULL;
        ListNode* nextNode=NULL;
        while(temp!=NULL)
        {
            nextNode=temp->next;
            if(prevNode==NULL)
            {
                prevNode=temp;
                prevNode->next=NULL;
            }
            else
            {
                temp->next=prevNode;
                prevNode=temp;
            }
            temp=nextNode;
        }
        ListNode* first = head;
ListNode* second = prevNode;

while(first != NULL && second != NULL)
{
    ListNode* firstNext = first->next;
    ListNode* secondNext = second->next;

    first->next = second;
    second->next = firstNext;

    first = firstNext;
    second = secondNext;
}
// if(second != NULL)
//     first->next = second;
    }
};
