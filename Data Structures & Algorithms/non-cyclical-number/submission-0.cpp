class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        s.insert(n);
        while(n!=1)
        {
            int num=n,sum=0;
            while(num>0)
            {
                sum+=(num%10)*(num%10);
                num/=10;
            }
            if(s.find(sum)!=s.end())
            return false;
            n=sum;
            s.insert(n);
        }
        return true;
    }
};
