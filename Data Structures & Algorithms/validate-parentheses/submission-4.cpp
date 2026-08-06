class Solution {
public:
    bool isValid(string s) {
       stack<char> stk;
       int countO=0,countC=0;
       for(int i=0;i<s.length();i++)
       {
         if(s[i]=='(' || s[i]=='{' || s[i]=='[')
         {
            stk.push(s[i]);
            countO++;
         }
         else
         {
            if(!stk.empty() && s[i]==')' && stk.top()=='(')
            {
                stk.pop();
                countC++;
            }
            else
            if(!stk.empty() && s[i]=='}' && stk.top()=='{')
            {
                stk.pop();
                countC++;
            }
            else
            if(!stk.empty() && s[i]==']' && stk.top()=='[')
            {
                stk.pop();
                countC++;
            }
            else
            return false;
         }
       } 
       if(countO!=countC)
       return false;
       return true;
    }
};
