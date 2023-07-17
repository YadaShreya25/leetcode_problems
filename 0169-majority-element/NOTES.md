​3 Approaches:

1)sorting and middle value is the answer
-->Since max ele is the one occuring more than half of array size so it compulsory present at middle. 
-->As the max ele cover more than half area of the max so compulary present ae.

Code:
class Solution {
public:
    int majorityElement(vector<int>& n) {
        sort(n.begin(),n.end());
        return n[n.size()/2];
    }
};

T.C : O(nlogn)
S.c : O(1)

2)using hashing:
-->using unordered map for storing ele ans frequency.
-->another loop check int map where ele frequency greater than half of size of array.

Code:
class Solution {
public:
    int majorityElement(vector<int>& n) {
        unordered_map<int,int>m;
        for(auto x:n)
        {
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.second>(n.size()/2))
            {
                return x.first;
            }
        }
        return 0;
    }
};

T.C : O(n)
S.c : O(n)

3)using Moore's Voting Algorithm is based on the fact that if there is a majority element in an array, it will always remain in the lead, even after encountering other elements.

Algorithm:
-->Initialize two variables: count and candidate. Set count to 0 and candidate to an arbitrary value.
-->Iterate through the array nums:
a. If count is 0, assign the current element as the new candidate and increment count by 1.
b. If the current element is the same as the candidate, increment count by 1.
c. If the current element is different from the candidate, decrement count by 1.
After the iteration, the candidate variable will hold the majority element.

Code:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;
    }
};

T.C : O(n)
S.c : O(1)
