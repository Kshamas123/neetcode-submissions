class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int area=0;
        stack<int> stk;
        for(int i=0;i<heights.size();i++)
        {
            while(!stk.empty() && heights[stk.top()]>heights[i])
            {
                int temp=heights[stk.top()];
                stk.pop();
                int width;
                if (stk.empty())
                    width = i;
                else
                    width = i - stk.top() - 1;
                area=max(area,width*temp);
            }
            stk.push(i);
        }
        while(!stk.empty())
        {
           int temp=heights[stk.top()];
            stk.pop();
            int width;
            if (stk.empty())
                width = heights.size();
            else
                width = heights.size() - stk.top() - 1;

            area=max(area,width*temp); 
        }
        return area;
    }
};
