class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefix(height.size(),0);
        vector<int> suffix(height.size(),0);
        int lmax=0;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]<lmax)
            {
                prefix[i]=lmax;
            }
            else
            {
                lmax=height[i];
            }
        }
        int rmax=0;
        for(int i=height.size()-1;i>=0;i--)
        {
            if(height[i]<rmax)
            {
                suffix[i]=rmax;
            }
            else
            {
                rmax=height[i];
            }
        }
        int total=0;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]<prefix[i] && height[i]<suffix[i])
            {
                total+=min(prefix[i],suffix[i])-height[i];
            }
        }
        return total;
    }
};
