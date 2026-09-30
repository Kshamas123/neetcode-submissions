class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return fun(0,nums,dp);
    }
    int fun(int i,vector<int>& nums,vector<int> &dp)
    {
        if(i>=nums.size())
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        int take=0,nottake=0;
        take=nums[i]+fun(i+2,nums,dp);
        nottake=fun(i+1,nums,dp);
        return dp[i]=max(take,nottake);
    }
};
