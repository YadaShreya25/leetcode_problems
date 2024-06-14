class Solution {
public:
    
    
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,len=s.size(),maxLen=0;
        map<char,int>m;
        for(i=0;i<len;i++)
        {
            if(m.empty() || m.find(s[i])==m.end())
            {
                m[s[i]]++;
                int c=m.size();
                maxLen=max(maxLen,c);
            }
            else
            {
                char t=s[i];
                while(s[j]!=t && j<i)
                {
                    
                    m[s[j]]--;
                    if(m[s[j]]==0)
                    {
                        m.erase(s[j]);
                    }
                    j++;
                }
                m[s[j]]--;
                if(m[s[j]]==0)
                {
                    m.erase(s[j]);
                }
                j++;
                m[s[i]]++;
                maxLen=max(int(m.size()),maxLen);
            }
        }
        return maxLen;
    }
};