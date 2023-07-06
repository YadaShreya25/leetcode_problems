class Solution {
public:
    int maxProfit(vector<int>& p) {
        int v=p[p.size()-1],ans=0;
        for(int i=p.size()-2;i>=0;i--)
        {
            if(p[i]<v)
            {
                ans=max(ans,v-p[i]);
            }
            else
            {
                v=p[i];
            }
        }
        return ans;
    }
};