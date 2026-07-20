class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        unordered_set<int> s(nums.begin(),nums.end());
        int maxi=1;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)!=s.end())
            {
                int count=1;
                s.insert(nums[i]);
                int n=nums[i];
                while(s.find(n)!=s.end())
                {
                    count++;
                    n++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};
