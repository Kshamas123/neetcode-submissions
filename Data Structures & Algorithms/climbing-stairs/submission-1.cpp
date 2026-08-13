class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
       return fun(0,n,dp); 
    }
    int fun(int i,int n,vector<int> &dp)
    {
        if(i>n)
        return 0;
        if(i==n)
        return 1;
        if(dp[i]!=-1)
        return dp[i];
        int take1=fun(i+1,n,dp);
        int take2=fun(i+2,n,dp);
        return dp[i]=take1+take2;
    }
};
