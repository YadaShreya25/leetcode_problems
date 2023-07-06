class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int r=m.size(),c=m[0].size();
        vector<int>row(c,1);
        vector<int>col(r,1);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
              if(m[i][j]==0)
              {
                  row[j]=0;
                  col[i]=0;
              }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
              if(m[i][j]!=0)
              {
                  if(row[j]==0 || col[i]==0 )
                  {
                      m[i][j]=0;
                  }
              }
            }
        }
        
    }
};