class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<=j)
        {
            if(!isalnum(s[i]))
            {
                i++;
            }
            else
            if(!isalnum(s[j]))
            {
                j--;
            }
            else
            {
                char l=tolower(s[i]);
                char r=tolower(s[j]);
                if(l!=r)
                return false;
                i++;
                j--;
            }
        }
        return true;
    }
};
