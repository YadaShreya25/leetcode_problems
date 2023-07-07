class Solution {
public:
    void sortColors(vector<int>& n) {
        int curr=0,zpos=0,tpos=n.size()-1;
        while(curr<=tpos)
        {
            if(n[curr]==0)
            {
                swap(n[curr],n[zpos]);
                curr++;
                zpos++;
            }
            else if(n[curr]==1)
            {
                curr++;
            }
            else
            {
                swap(n[curr],n[tpos]);
                tpos--;
            }
        }
    }
};