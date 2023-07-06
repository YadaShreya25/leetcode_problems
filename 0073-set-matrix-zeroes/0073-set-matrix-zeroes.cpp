class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        bool flag=1;
        int r=m.size();
        int c=m[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(m[i][j]==0)
                {
                    m[i][0]=0;
                    if(j!=0)
                    {
                        m[0][j]=0;
                    }
                    else
                    {
                        flag=0;
                    }
                }
            }
        }
        
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(m[i][j]!=0)
                {
                  if(m[i][0]==0 || m[0][j]==0)
                  {
                    m[i][j]=0;
                  }
                }
            }
        }
        if(m[0][0]==0)
        {
            for(int i=0;i<c;i++)
            {
                m[0][i]=0;
            }
        }
        if(flag==0)
        {
            for(int i=0;i<r;i++)
            {
                m[i][0]=0;
            }
        }  
    }
};