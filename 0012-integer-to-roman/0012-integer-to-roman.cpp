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