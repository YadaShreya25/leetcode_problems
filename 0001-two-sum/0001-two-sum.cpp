class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        map<int,int>s;
        vector<int>v;
        for(int i=0;i<n.size();i++)
        {
            if(!s.empty() && s.find(t-n[i])!=s.end())
            {
                v.push_back(s[t-n[i]]);
                v.push_back(i);
            }
            else
            {
                s[n[i]]=i;
            }
        }
        return v;
    }
};