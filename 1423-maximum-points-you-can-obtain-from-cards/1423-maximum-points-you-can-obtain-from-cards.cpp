class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        
        int lsum=0,rsum=0,maxval=0,j=c.size()-1;
        for(int i=0;i<k;i++)
        {
            lsum+=c[i];
        }
        maxval=lsum;
        for(int i=k-1;i>=0;i--)
        {
           lsum-=c[i];
           rsum+=c[j];
            j--;
            maxval=max(maxval,(lsum+rsum));
        }            
       return maxval;
    }
};