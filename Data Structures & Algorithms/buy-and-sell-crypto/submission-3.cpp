class Solution {
public:
    int maxProfit(vector<int>& prices) {
        return fun(0,prices,0,0);
    }
    int fun(int i,vector<int> &prices,int buy,int count)
    {
        if(i>=prices.size() || count==1)
        return 0;
        int take=0,nottake=0;
        
        if(buy==0)
        {
            take=-prices[i]+fun(i+1,prices,1,0);
            nottake=fun(i+1,prices,0,0);
        }
        else
        {
             take=prices[i]+fun(i+1,prices,0,1);
             nottake=fun(i+1,prices,1,0);
        }
        return max({take,nottake,0});
    }
};
