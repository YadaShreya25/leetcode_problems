class Solution {
public:
    int strStr(string h, string n) {
        auto x=h.find(n);
        if(x>=0)
            return x;
        else
            return -1;
    }
};