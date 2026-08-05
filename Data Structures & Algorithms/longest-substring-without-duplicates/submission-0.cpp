class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int start=0,e=0;
        int count=0,maxi=0;
        while(e<s.length())
        {
            if(m.find(s[e])==m.end())
            {
                m[s[e]]++;
                count++;
                maxi=max(maxi,count);
            }
            else
            {
            while(m.find(s[e])!=m.end())
            {
                m[s[start]]--;
                count--;
                if(m[s[start]]==0)
                m.erase(s[start]);
                start++;
            }
            m[s[e]]++;
            count++;
            }
            e++;
        }
        return maxi;
    }
};
