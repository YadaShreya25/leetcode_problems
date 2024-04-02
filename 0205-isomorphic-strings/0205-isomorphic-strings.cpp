class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m;
        set<char>x;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end())
            {
            if(x.find(t[i])==x.end())
            {
                m[s[i]]=t[i];
                x.insert(t[i]);
            }
            else
            {
                return false;
            }
            }
            else if(m[s[i]]!=t[i])
                return false;
                
        }
        return true;
    }
};