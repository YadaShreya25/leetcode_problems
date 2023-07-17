class Solution {
public:
    int majorityElement(vector<int>& n) {
        int temp=0,val=0;
        
        for(auto x:n)
        {
            if(val==0)
            {
                temp=x;
            }
            if(temp==x)
            {
                val++;
            }
            else
            {
                val--;
            }
        }
        return temp;
    }
};