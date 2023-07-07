class Solution {
public:
    int findDuplicate(vector<int>& n) {
        int slow=n[0],fast=n[0];
        do
        {
            slow=n[slow];
            fast=n[n[fast]];
        }while(fast!=slow);
         fast=n[0];
        while(fast!=slow)
        {
            fast=n[fast];
            slow=n[slow];
        }
        return slow;
    }
};