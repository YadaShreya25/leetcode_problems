class Solution {
public:
    string convertToTitle(int cn) {
        string ans;
        while(cn>0)
        {
            cn--;
            ans=char(cn%26+'A')+ans;
            cn/=26;
        }
        return ans;
    }
};