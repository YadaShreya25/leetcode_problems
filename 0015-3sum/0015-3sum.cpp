class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        int m=n.size();
        vector<vector<int>>ans;
        sort(n.begin(),n.end());
        for(int i=0;i<m;i++)
        {
            if(i>0 && n[i]==n[i-1]) continue;
            int j=i+1,k=m-1;
            while(j<k)
            {
                int temp=n[i]+n[j]+n[k];
                if(temp==0)
                {
                    ans.push_back({n[i],n[j],n[k]});
                    j++;
                    k--;
                    while(j<k && n[j]==n[j-1]) j++;
                    while(j<k && n[k]==n[k+1]) k--;
                }
                else if(temp<0)
                {
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};