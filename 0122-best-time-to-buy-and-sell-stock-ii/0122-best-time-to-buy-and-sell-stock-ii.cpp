class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int ans=0;
        for(int i=0;i<p.size()-1;i++)
        {
            if(p[i]<p[i+1])
            {
                ans+=p[i+1]-p[i];
            }
        }
        return ans;
    }
};