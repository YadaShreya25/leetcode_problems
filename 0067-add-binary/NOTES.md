Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.


-->if sum is 0=> carry=0
-->if sum is 1=> carry=0​
-->if sum is 2=> carry=1
-->if sum is 3=> carry=1
which is to be stored in carry variable ==>(sum/2) or carry=sum>1?1:0;

the value to be added is(we can get by sum%2)
-->if sum=0 ==>ans=0
-->if sum=1 ==>ans=1
-->if sum=2 ==>ans=0(carry=1)
-->if sum=3 ==>ans=1(carry=1)
