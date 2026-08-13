class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        int n=cost.size()-1;
        return min(fun(0,n,cost,dp),fun(1,n,cost,dp));
    }
    int fun(int i,int n,vector<int>& cost,vector<int> &dp)
    {
        if(i>n)
        return 0;
        if(i==n)
        return cost[i];
        if(dp[i]!=-1)
        return dp[i];
        int take1=cost[i]+fun(i+1,n,cost,dp);
        int take2=cost[i]+fun(i+2,n,cost,dp);
        return dp[i]=min(take1,take2);
    }
};
