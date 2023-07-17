class Solution {
public:
    int majorityElement(vector<int>& n) {
        unordered_map<int,int>m;
        for(auto x:n)
        {
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.second>(n.size()/2))
            {
                return x.first;
            }
        }
        return 0;
    }
};