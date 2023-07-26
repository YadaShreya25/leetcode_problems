Time Complexity and Space Complexity:
Time complexity: O(13) = O(1) - Approach 1
Space complexity: O(13) = O(1) - Approach 1

**​Approach-1:**
class Solution {
public:
    string intToRoman(int n) {
     
        string romanValue;
        vector<pair<int,string>>val={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
        
        for(int i=0;n>0;i++)  // for(int i=0;i<val.size();i++)
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

**Approach-2:**
class Solution {
public:
    string intToRoman(int n) {
     
        string romanValue;
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string huns[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thos[]={"","M","MM","MMM"};
        
        romanValue=thos[n/1000]+huns[(n%1000)/100]+tens[(n%100)/10]+ones[(n%10)];
        return romanValue;
        
    }
};

**Approach-3:**
class Solution {
public:
    string intToRoman(int n) {
        string ans;
        while(n)
        {
        if(n>=1000)
        {
            ans+="M";
            n-=1000;
        }
        else if(n>=900)
        {
            ans+="CM";
            n-=900;
        }
        else if(n>=500)
        {
            ans+="D";
            n-=500;
        }
       else if(n>=400)
        {
            ans+="CD";
            n-=400;
        }
        else if(n>=100)
        {
            ans+="C";
            n-=100;
        }
        else if(n>=90)
        {
            ans+="XC";
            n-=90;
        }
        else if(n>=50)
        {
            ans+="L";
            n-=50;
        }
        else if(n>=40)
        {
            ans+="XL";
            n-=40;
        }
        else if(n>=10)
        {
            ans+="X";
            n-=10;
        }
        else if(n>=9)
        {
            ans+="IX";
            n-=9;
        }
        else if(n>=5)
        {
            ans+="V";
            n-=5;
        }
        else if(n>=4)
        {
            ans+="IV";
            n-=4;
        }
        else
        {
            ans+="I";
            n-=1;
        }
    }
        return ans;
    }
};


**Approach-4:**
class Solution {
    public String intToRoman(int num) {
        String roman = "";
        int[] storeInt = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String[] storeRoman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < storeInt.length; i++) {
            while (num >= storeInt[i]) {
                roman += storeRoman[i];
                num -= storeInt[i];
            }
        }
        
        return roman;
    }
}
