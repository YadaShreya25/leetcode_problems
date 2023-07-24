**Approach-1:**
T.C: O(n)
S.C: O(1)

​class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1,count1=0,count2=0;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                i++;
                count1++;
            }
        }
        i=0,j=s.size()-1;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                j--;
                count2++;
            }
        }
        return (count1<2 || count2<2)?true:false;
    }
};

**Approach-2:**
