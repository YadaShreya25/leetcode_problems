class Solution {
public:
    int subarraysDivByK(vector<int>& n, int k) {
        vector<int>v(k,0);
        int temp=0,ans=0,rem=0;
        v[0]=1;
        for(int i=0;i<n.size();i++)
        {
            temp+=n[i];
            rem=temp%k;
            if(rem<0)
            {
                v[rem+k]++;
                ans+=v[rem+k]-1;
            }
            else
            {
                v[rem]++;
                ans+=v[rem]-1;
            }
            
        }
       return ans;
    }
};