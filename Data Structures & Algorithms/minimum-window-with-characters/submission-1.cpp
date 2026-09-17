class Solution {
public:
    string minWindow(string s, string t) {
        int sfreq=0;
        unordered_map<char,int> tmap;
        for(int i=0;i<t.length();i++)
        tmap[t[i]]++;
        unordered_map<char,int> smap;
        int start=-1,end=-1;
        int left=0,right=0;
        int mini=INT_MAX;
        while(right<s.length())
        {
            if(tmap.find(s[right])!=tmap.end())
            {
                smap[s[right]]++;
                if(smap[s[right]]==tmap[s[right]])
                sfreq++;
            }
            while(sfreq==tmap.size())
            {
                cout<<start;
                int currlen=right-left+1;
                if(currlen<mini)
                {
                    start=left;
                    end=right;
                    mini=end-start+1;
                }
                if(tmap.find(s[left])!=tmap.end())
                {
                    smap[s[left]]--;
                    if(smap[s[left]]<tmap[s[left]])
                    sfreq--;
                }
                left++;
            }
            right++;
        }
        if(start==-1 && end==-1)
        return "";
        string str="";
        for(int i=start;i<=end;i++)
        str+=s[i];
        return str;
    }
};
