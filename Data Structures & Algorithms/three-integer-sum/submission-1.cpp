class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> res;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         for(int k=j+1;k<nums.size();k++)
        //         {
        //             if(nums[i]+nums[j]+nums[k]==0)
        //             {
        //                 vector<int> temp={nums[i],nums[j],nums[k]};
        //                 sort(temp.begin(),temp.end());
        //                 if(s.find(temp)==s.end())
        //                 {
        //                     s.insert(temp);
        //                     res.push_back(temp);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return res;

        //best solution
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i]*-1;
            int left=i+1;
            int right=nums.size()-1;
            while(left<right)
            {
                if(nums[left]+nums[right]==n)
                {
                    if(s.find({nums[i],nums[left],nums[right]})==s.end())
                    {
                        s.insert({nums[i],nums[left],nums[right]});
                        res.push_back({nums[i],nums[left],nums[right]});
                    }
                    left++;
                    right--;
                }
                else
                if(nums[left]+nums[right]<n)
                left++;
                else
                right--;

            }
        }
        return res;
    }
};
