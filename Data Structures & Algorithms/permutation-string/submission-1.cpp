class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int wsize=0;
        unordered_map<char,int> s1map;
        for(int i=0;i<s1.length();i++)
        {
            s1map[s1[i]]++;
        }
        unordered_map<char,int> s2map;
        int left=0,right=0;
        while(right<s2.length())
        {
           if(s1map.find(s2[right])!=s1map.end())
           {
            s2map[s2[right]]++;
           }
           wsize++;
           if(wsize==s1.length())
           {
              bool flag=true;
              for(int i=0;i<s1.length();i++)
              {
                if(s2map.find(s1[i])!=s2map.end())
                {
                    if(s1map[s1[i]]!=s2map[s1[i]])
                    {
                        flag=false;
                        break;
                    }
                }
                else
                flag=false;
              }
              if(flag)
              return true;
              if(s2map.find(s2[left])!=s2map.end())
              {
                s2map[s2[left]]--;
                if(s2map[s2[left]]==0)
                s2map.erase(s2[left]);
              }
              wsize--;
              left++;
           }
           right++;
        }
        return false;
    }
};
