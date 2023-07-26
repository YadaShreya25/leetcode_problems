class Solution {
public:
    string intToRoman(int n) {
     
        string romanValue;
        vector<pair<int,string>>val={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
        
        for(int i=0;i<val.size();i++)
        {
            while(n>=val[i].first)
            {
                romanValue+=val[i].second;
                n-=val[i].first;
            }
        }
        
        return romanValue;
        
    }
};