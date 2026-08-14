class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freqMap;
        int maxFreq=0;
        int res=0;
        int left=0,right=0;
        while(right<s.length())
        {
            freqMap[s[right]]++;
            int window=right-left+1;
            if(maxFreq<freqMap[s[right]])
            {
                maxFreq=freqMap[s[right]];
            }
            while(window-maxFreq>k)
            {
                freqMap[s[left]]--;
                left++;
                window=right-left+1;
            }
            res=max(res,right-left+1);
            right++;
        }
        return res;
    }
};
