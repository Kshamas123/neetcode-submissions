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
    bool hasCycle(ListNode* head) {
        // set<ListNode*> s;
        // ListNode* temp=head;
        // while(temp!=NULL)
        // {
        //     if(s.find(temp)!=s.end())
        //     return true;
        //     s.insert(temp);
        //     temp=temp->next;
        // }
        // return false;
        if(head==NULL)
        return false;
        ListNode* t1=head;
        ListNode* t2=NULL;
        if(head->next!=NULL)
        {
            if(head->next->next!=NULL)
            t2=head->next->next;
            else
            return false;
        }
        else
        return false;
        while(t1!=NULL && t2!=NULL)
        {
            if(t1==t2)
            return true;
            t1=t1->next;
            if(t2->next!=NULL && t2->next->next!=NULL)
            {
                t2=t2->next->next;
            }
            else
            t2=NULL;
        }
        return false;

    }
};
