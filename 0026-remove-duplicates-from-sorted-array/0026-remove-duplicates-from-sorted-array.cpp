class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        int i=0,j=1;
        while(j<n.size())
        {
            if(n[i]==n[j])
            {
                n.erase(n.begin()+j);
                
            }
            else{
                i++;
                j++;
            }
        }
        return n.size();
    }
};