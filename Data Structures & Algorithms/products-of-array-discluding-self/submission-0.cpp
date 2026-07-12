class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1,nonpro=1,count0=0;
        for(int i=0;i<nums.size();i++)
        {
            pro*=nums[i];
            if(nums[i]!=0)
            {
                nonpro*=nums[i];
            }
            if(nums[i]==0)
            count0++;
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                res.push_back(pro/nums[i]);
            }
            else
            {
                if(count0>1)
                res.push_back(0);
                else
                res.push_back(nonpro);
            }
        }
        return res;
    }
};
