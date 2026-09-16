class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> m;
       for(int i=0;i<nums.size();i++)
       {
        m[nums[i]]++;
       } 
       int val=0;
       for(const auto& [num, freq] : m)
       {
          if(freq>(nums.size()/2))
          {
            val=num;
            break;
          }
       }
       return val;
    }
};