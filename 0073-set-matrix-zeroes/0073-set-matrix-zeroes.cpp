class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<pair<int,int>>v;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
                if(m[i][j]==0)
                v.push_back({i,j});
            }
        }
        for(int i=0;i<v.size();i++)
        {
            auto k=v[i].first,l=v[i].second;
            for(int j=0;j<m.size();j++)
            {
                m[j][l]=0;
            }
            for(int s=0;s<m[0].size();s++)
            {
                m[k][s]=0;
            }
         }
        
    }
};