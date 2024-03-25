class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        int m=n.size();
        vector<int>ans;
        for(int i=0;i<n.size();i++)
        {
            if(n[abs(n[i])-1]>0)
            {
            n[abs(n[i])-1]=-n[abs(n[i])-1];
            }
            else
            {
                ans.push_back(abs(n[i]));
            }
        }
        return ans;
        //[1...n]
    }
};