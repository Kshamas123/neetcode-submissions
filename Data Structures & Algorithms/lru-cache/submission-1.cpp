class LRUCache {
struct ListNode {
    int key;
    int value;
    ListNode* prev;
    ListNode* next;
};
public:
    unordered_map<int,ListNode*> cacheMap;
    ListNode* head=NULL;
    ListNode* tail=NULL;
    int cacheMapCapacity=0;
    LRUCache(int capacity) {
        cacheMap.reserve(capacity);
        cacheMapCapacity=capacity;
    }
    
    int get(int key) {
        if(cacheMap.find(key)==cacheMap.end())
        return -1;
        ListNode * node=cacheMap[key];
        int value=node->value;
        removeNode(node);
        insertAtTail(node);
        return value;
    }
    
    void put(int key, int value) {
        if(cacheMap.find(key)!=cacheMap.end())
        {
            ListNode * node=cacheMap[key];
            removeNode(node);
            node->value=value;
            insertAtTail(node);
        }
        else
        {
            if(cacheMapCapacity==0)
            return;
            if(cacheMap.size()==cacheMapCapacity)
            {
                int rk=head->key;
                cacheMap.erase(rk);
                removeNode(head);
                ListNode* node=new ListNode();
                node->key=key;
                node->value=value;
                node->prev=NULL;
                node->next=NULL;
                insertAtTail(node);
                cacheMap[key]=node;
            }
            else
            {
                ListNode* node=new ListNode();
                node->key=key;
                node->value=value;
                node->prev=NULL;
                node->next=NULL;
                insertAtTail(node);
                cacheMap[key]=node; 
            }
        }

    }

    void removeNode(ListNode *node)
    {
        if(node->prev==NULL && node->next==NULL)
        {
            head=NULL;
            tail=NULL;
            return;
        }
        if(node->prev==NULL)
        {
            head=node->next;
            head->prev=NULL;
        }
        else
        if(node->next==NULL)
        {
            tail=node->prev;
            tail->next=NULL;
        }
        else
        {
            ListNode* temp=node->prev;
            temp->next=node->next;
            node->next->prev=temp;
        }
    }
    void insertAtTail(ListNode *node)
    {
        if (head == NULL && tail == NULL)
        {
            head = node;
            tail = node;
            node->next = NULL;
        }
        else
        {
            node->prev = tail;
            tail->next = node;
            tail = node;
            node->next=NULL;
        }
    }
};
