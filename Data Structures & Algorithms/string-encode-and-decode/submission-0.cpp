class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str="";
        for(int i=0;i<strs.size();i++)
        {
            int count=0;
            string word="";
            for(int j=0;j<strs[i].length();j++)
            {
                word+=strs[i][j];
                count++;
            }
            encoded_str=encoded_str+to_string(count)+"#"+word;
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> decode_str;
        int i=0;
        bool flag=true;
        int num=0;
        string  n="";
        string res="";
        while(i<s.length())
        {
            while(flag)
            {
                if(s[i]!='#')
                {
                 n+=s[i];
                }
                else
                {
                    flag=false;
                    num=stoi(n);
                    n="";
                    i++;
                    continue;
                }
                i++;
            }
            if(num!=0)
            {
                res+=s[i];
                num--;
                if(i==s.length()-1)
            decode_str.push_back(res);
                i++;

            }
            else
            {
                decode_str.push_back(res);
                flag=true;
                res="";
            }
        }
        return decode_str;
    }
};
