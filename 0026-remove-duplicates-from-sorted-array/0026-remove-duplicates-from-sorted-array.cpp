class Solution {
public:
    int removeDuplicates(vector<int>& n) {
       /* int i=0,j=1;
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
        */
        /*int i=0,j=1;
        while(j<n.size())
        {
            if(n[i]!=n[j] )
            {
                n[i+1]=n[j];
                i++;
            }
            j++;
        }
        return i+1;
        */
        int j=0;
        set<int>s;
        for(int i=0;i<n.size();i++)
        {
            s.insert(n[i]);
        }
        for(auto x:s)
        {
            n[j++]=x;
        }
        return s.size();
    }
};