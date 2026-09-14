class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end(),[](const string &a,const string &b){
            return a.length()<b.length();
        });
        int count=0;
        for(int i=0;i<strs[0].length();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=strs[0][i])
                {
                    if(count==0)
                    return "";
                    else
                    return strs[0].substr(0,count);
                }
            }
            count++;
        }
        if(count==0)
        return "";
        return strs[0].substr(0,count);
    }
};