class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> res;
        for(int i=0;i<position.size();i++)
        {
            res.push_back({position[i],speed[i]});
        }
        sort(res.begin(), res.end(), greater<>());
        int fleet=0;
        float lasttime=0;
        for(int i=0;i<res.size();i++)
        {
            float time=float(target-res[i].first)/(float)res[i].second;
            if(time>lasttime)
            {
                fleet++;
                lasttime=time;
            }
        }
        return fleet;
        
    }
};
