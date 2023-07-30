class Solution {
public:
    string addBinary(string a, string b) {
       int i=a.size()-1,j=b.size()-1,c=0;
       string ans;
        while(i>=0 || j>=0)
        {
            int sum=c;
            if(i>=0)
            {
                sum+=a[i--]-'0';
            }
            if(j>=0)
            {
                sum+=b[j--]-'0';
            }
                c=sum>1?1:0;
                ans+=to_string(sum%2);
            
        }
        if(c)
            ans+=to_string(c);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};