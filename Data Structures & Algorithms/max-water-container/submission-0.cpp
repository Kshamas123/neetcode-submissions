class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=0;
        int i=0,j=heights.size()-1;
        while(i<j)
        {
            int mini=min(heights[i],heights[j]);
            int width=j-i;
            maxi=max(maxi,mini*width);
            if(heights[i]<heights[j])
            i++;
            else
            j--;
        }
        return maxi;
    }
};
