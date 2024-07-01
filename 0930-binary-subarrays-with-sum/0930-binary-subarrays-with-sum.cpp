class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int g) {
        int count=0,n=nums.size(),sum;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                if(sum==g)
                    count++;
                else if(sum>g)
                    break;
            } 
        }
        return count;
    }
};