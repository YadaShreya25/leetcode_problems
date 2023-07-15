class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1,maxval=0;
        while(i<j)
        {
            maxval=max(maxval,(j-i)*min(h[i],h[j]));
            if(h[i]<h[j])
                i++;
            else
                j--;
            
        }
         return maxval;   
    }
};