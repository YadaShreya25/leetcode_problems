class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans; 
        int s=strs.size();
        for(int i=0;i<strs[0].size();i++)
        {
            char ch=strs[0][i];
            bool flag=true;
            for(int j=1;j<s;j++)
            {
                if(i>strs[j].size() || ch!=strs[j][i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag==false)
            {
                break;
            }
            else
            {
                ans+=ch;
            }
        }
        return ans;
    }
};