class Solution {
public:
    bool isValid(string s) {
        map<char,int>m{{'(',1},{'{',2},{'[',3},{')',-1},{'}',-2},{']',-3}};
        stack<char>st;
        int d=0;
        for(auto x:s)
        {
            if(m[x]>0)
            {
                st.push(x);
            }
            else
            {
                if(!st.empty())
                {
                    if(m[st.top()]+m[x]==0)
                    {
                        st.pop();
                    }
                    else
                        return false;
                }
                else
                {
                    d++;
                }
            }
        }
        if(st.empty() && d==0)
        {
            return true;
        }
        return false;
    }
};