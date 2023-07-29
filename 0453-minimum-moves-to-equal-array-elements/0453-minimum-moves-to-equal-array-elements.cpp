class Solution {
public:
    int minMoves(vector<int>& n) {
        sort(n.begin(),n.end());
        int c=0;
        for(auto x:n)
        {
            c+=x-n[0];
        }
        return c;
    }
};

