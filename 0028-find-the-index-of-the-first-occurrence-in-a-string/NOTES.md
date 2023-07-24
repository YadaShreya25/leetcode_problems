**​Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
**
Example 1:

**Input:** haystack = "sadbutsad", needle = "sad"
**Output:** 0
**Explanation:** "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

**Input:** haystack = "leetcode", needle = "leeto"
**Output:** -1
**Explanation:** "leeto" did not occur in "leetcode", so we return -1.
 
**Constraints:**

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.


Code:
**Approach-1:**

**Time complexity:**
O(m*n)

class Solution {
public:
    int strStr(string haystack, string needle) {
        // edge cases 
        if(haystack.length() < needle.length()) return -1;
        if(haystack == needle) return 0;
        
        for(int i=0;i < haystack.length()-needle.length()+1;i++){
            // core condition
            if(haystack.substr(i,needle.length()) == needle){
                return i;
            }
        }
        return -1;
    }
};

---------------
class Solution {
public:
    int strStr(string s2, string s1) {
        return s2.find(s1) != string::npos ? s2.find(s1) : -1;
    }
};

class Solution {
public:
    int strStr(string haystack, string needle) {
        int it = haystack.find(needle);
        if(it == haystack.npos)   return -1;
        else return it;
    }
};

**Complexity**
Time complexity: The time complexity of the strStr function is O(m+n), where m is the length of the haystack string, and n is the length of the needle string. This is because the find function in C++ STL has a linear time complexity in the worst case, as it needs to check each character in the haystack string for a match with the needle string.
Space complexity: The space complexity of the strStr function is O(1), as it only uses a constant amount of extra space to store the integer variable found.
-----------
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0,k;
        bool b=true;
        while(i<haystack.size()){
            if(haystack[i]==needle[j]){
                k=i;
                b=true;
                while(j<needle.size()){
                    if(haystack[i]!=needle[j]){
                        j=0;
                        b=false;
                        goto l;
                    }
                    i++;
                    j++;
                }
                l:
                if(b){
                    return k;
                }else{
                    i=k;
                    j=0;
                }
            }
            i++;
        }
        return -1;
    }
};

Complexity
Time complexity:
if n= size of haystack and m = size of needle
the worst complexity is O(n*m)
Space complexity:
O(1)
