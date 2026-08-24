class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> stk;
        vector<int> res;
        for(int i=temp.size()-1;i>=0;i--)
        {
            while(!stk.empty() && temp[stk.top()]<=temp[i])
            {
                stk.pop();
            }
            if(stk.empty())
            {
                res.push_back(0);
            }
            else
            {
                res.push_back(stk.top()-i);
            }
            stk.push(i);
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};
