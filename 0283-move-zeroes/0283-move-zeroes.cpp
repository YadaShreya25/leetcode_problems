class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int i=0,j=0;
        while(i<=j && j<n.size())
        {
            if(n[j]!=0)
            {
                
                swap(n[i],n[j]);
                i++;
            }
            j++;
        }
    }
};