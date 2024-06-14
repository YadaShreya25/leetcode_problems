class Solution {
public:
    
    
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,len=s.size(),maxLen=0;
        unordered_set<char>m;
        for(i=0;i<len;i++)
        {
            if(m.empty() || m.find(s[i])==m.end())
            {
                m.insert(s[i]);
                int c=m.size();
                maxLen=max(maxLen,c);
            }
            else
            {
                char t=s[i];
                while(s[j]!=t && j<i)
                {
                        m.erase(s[j]);
                    j++;
                }
                m.erase(s[j]);
                j++;
                m.insert(s[i]);
                maxLen=max(int(m.size()),maxLen);
            }
        }
        return maxLen;
    }
};