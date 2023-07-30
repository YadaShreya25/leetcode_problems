class Solution {
public:
    int maximumProduct(vector<int>& n) {
        sort(n.begin(),n.end());
        int ans=n[n.size()-1]*n[n.size()-2]*n[n.size()-3];
        ans=max(ans,n[n.size()-1]*n[0]*n[1]);
        return ans;
    }
};