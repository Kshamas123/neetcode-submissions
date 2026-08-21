class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int maxi=0;
        vector<int> res;
        int left=0,right=0,wsize=0;
        while(right<nums.size())
        {
            if(nums[maxi]<nums[right])
            maxi=right;
            wsize++;
            if(wsize==k)
            {
                res.push_back(nums[maxi]);
                int i=left;
                if(i==maxi)
                {
                    maxi=left+1;
                    i=i+1;
                    while(i<=right)
                    {
                        if(nums[maxi]<nums[i])
                        maxi=i;
                        i++;
                    }
                }
                left++;
                wsize--;
            }
            right++;
        }
        return res;
    }
};
