class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="*" && tokens[i]!="/" && tokens[i]!="-" && tokens[i]!="+")
            {
                stk.push(stoi(tokens[i]));
            }
            else
            {
                int num1=0,num2=0;
                char exp;
                if(tokens[i]=="*")
                exp='*';
                else
                if(tokens[i]=="-")
                exp='-';
                else
                if(tokens[i]=="/")
                exp='/';
                else
                exp='+';
                switch(exp)
                {
                    case '+':  num2=stk.top();
                               stk.pop();
                               num1=stk.top();
                               stk.pop();
                               stk.push(num1+num2);
                               break;
                    case '-':  num2=stk.top();
                               stk.pop();
                               num1=stk.top();
                               stk.pop();
                               stk.push(num1-num2);
                               break;
                    case '*':  num2=stk.top();
                               stk.pop();
                               num1=stk.top();
                               stk.pop();
                               stk.push(num1*num2);
                               break;
                    case '/':  num2=stk.top();
                               stk.pop();
                               num1=stk.top();
                               stk.pop();
                               stk.push(num1/num2);
                               break;
                }
            }
        }
        return stk.top();
    }
};
