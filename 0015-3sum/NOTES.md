​Brute solution:
->Using 3 Loops + vector(to sort the element in one order) + Set(for uniquely identifying the pairs i.e [-1,0,1] is same as [1,0,-1] [0,-1,1] [0,1,-1]) 
->T.C : O(N^3(loops)*log(no.of unique pair)) -->set takes log(n) for inserting the elements.
           -->not counting the sorting since we are sorting 3 elements which completes in constant time.
->S.C : 2*O(no.of unique pair)  --> one is set another answer vector.

Code:

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        int m=n.size();
        set<vector<int>>s;
        
       for(int i=0;i<m;i++)
       {
           for(int j=i+1;j<m;j++)
           {
               for(int k=j+1;k<m;k++)
               {
                   if(n[i]+n[j]+n[k]==0)
                   {
                       vector<int>temp={n[i],n[j],n[k]};
                       sort(temp.begin(),temp.end());
                       s.insert(temp);
                   }
               }
           }
       }
           vector<vector<int>>ans(s.begin(),s.end());
       return ans;
    }
};
-->but we TLE.


Approch 2:

using hashing 
-->T.C=O(n^2*log(n))
-->S.C=O(n) i.e(sets) +2*O(no.of unique pair)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        int m=n.size();
        set<vector<int>>a;
        for(int i=0;i<m;i++)
        {
            set<int>s;
            for(int j=i+1;j<m;j++)
            {
                int temp=-(n[i]+n[j]);
                if(s.find(temp)!=s.end())
                {
                    vector<int>v={n[i],n[j],-n[i]-n[j]};
                    sort(v.begin(),v.end());
                    a.insert(v);
                }
                s.insert(n[j]);
            }
        }
        vector<vector<int>>ans(a.begin(),a.end());
        return ans;
    }
};



Approch 3:

-->T.C=O(n^2)+ (nlogn) for sorting
-->S.C=O(no.of unique pair)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        int m=n.size();
        vector<vector<int>>ans;
        sort(n.begin(),n.end());
        for(int i=0;i<m;i++)
        {
            if(i>0 && n[i]==n[i-1]) continue;
            int j=i+1,k=m-1;
            while(j<k)
            {
                int temp=n[i]+n[j]+n[k];
                if(temp==0)
                {
                    ans.push_back({n[i],n[j],n[k]});
                    j++;
                    k--;
                    while(j<k && n[j]==n[j-1]) j++;
                    while(j<k && n[k]==n[k+1]) k--;
                }
                else if(temp<0)
                {
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};


