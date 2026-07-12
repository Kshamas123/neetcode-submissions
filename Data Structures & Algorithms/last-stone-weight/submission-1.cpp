class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> max_heap(stones.begin(), stones.end()); 
    while(max_heap.size()>1)
    {
        int n1=max_heap.top();
        max_heap.pop();
        int n2=max_heap.top();
        max_heap.pop();
        if(n1!=n2)
        {
            max_heap.push(n1-n2);
        }
    } 
    if(max_heap.size()==0)
    return 0; 
    return max_heap.top();
    }
};
