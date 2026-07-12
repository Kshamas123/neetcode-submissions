class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string,int> map;
        // unordered_set<int> s;
        // vector<vector<string>> res;
        // for(int i=0;i<strs.size();i++)
        // {
        //     if(s.find(i)==s.end())
        //     {
        //         vector<string> temp;
        //         temp.push_back(strs[i]);
        //         string tempstr=strs[i];
        //         sort(tempstr.begin(),tempstr.end());
        //         map[tempstr]++;
        //         s.insert(i);
        //         for(int j=i+1;j<strs.size();j++)
        //         {
        //             string str=strs[j];
        //             sort(str.begin(),str.end());
        //             if(map.find(str)!=map.end())
        //             {
        //                 temp.push_back(strs[j]);
        //                 s.insert(j);
        //             }
        //         }
        //         map.erase(tempstr);
        //         res.push_back(temp);
        //     }
        // }
        // return res;


        //optimal approach
        unordered_map<string,vector<string>> map;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            map[s].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto &it:map)
        {
            res.push_back(it.second);
        }
        return res;
    }
};
