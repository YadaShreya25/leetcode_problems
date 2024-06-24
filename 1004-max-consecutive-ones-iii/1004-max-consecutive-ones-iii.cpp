class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen=0,n=nums.size();
        int i=0,j=0,c=0;
        while(i<n)
        {
            if(nums[i]==0)
                c++;
            if(c>k)
            {
                if(nums[j]==0)
                    c--;
                j++;
            }
            if(c<=k)
            maxLen=max(i-j+1,maxLen);
            i++;
        }
        return maxLen;
    }
};