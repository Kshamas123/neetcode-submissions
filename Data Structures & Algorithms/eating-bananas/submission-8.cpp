class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int mini=INT_MAX;
        int mini_eat=INT_MAX;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int count=0;
            for(int i=0;i<piles.size();i++)
            {
                count += (piles[i] + mid - 1) / mid;
            }
            if(count<=h)
            {
                mini_eat=min(mid,mini_eat);
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return mini_eat;
    }
};
