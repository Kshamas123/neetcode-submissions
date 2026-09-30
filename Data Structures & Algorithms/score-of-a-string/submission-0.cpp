class Solution {
public:
    int scoreOfString(string s) {
        int i=0;
        int score=0;
        while(i<s.length())
        {
            int char1=s[i];
            cout<<char1;
            if(i+1<s.length())
            {
            int char2=s[i+1];
            cout<<char2;
            score+=abs(char1-char2);
            }
            i=i+1;
        }
        return score;
    }
};