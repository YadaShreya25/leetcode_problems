73. Set Matrix Zeroes
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Example 1:

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

Example 2:

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1

​Intuition
To traverse through thw whole matrix and if a zero is found then set whole row and column to 0

Approach 1:
Traversing the matrix and if 0 is found then setting it to a negative number cause setting it to zero can hamper values of other row and columns where initially 0 was not present after setting with negative number traversing again through matrix and setting to zero wherever negative number is found. This approach works only if no negative numbers are present in the matrix.

Complexity
Time complexity:
O(N*M)*O(N+M)
Space complexity:
O(1)
Code:
class Solution {
public:
    void setRowColumn(vector<vector<int>>& matrix,int m,int n,int r,int c)
    {
        for(int i=0;i<n;i++)
        {
            if(matrix[r][i]!=0)
                matrix[r][i]=-1;
        }
        for(int j=0;j<m;j++)
        {	if(matrix[j][c]!=0)
                matrix[j][c]=-1;
        }
    }
    void setZeroes(vector<vector<int>> &matrix)
    {
        // Write your code here.
        int m=matrix.size(), n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    setRowColumn(matrix,m,n,i,j);
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]<0)
                    matrix[i][j]=0;
            }
        }
        
    }
};
_________________________
Approach 2:
Using dummy arrays to keep track of zeroes. Setting that particular row to 0 in dummy row as well as dummy column arrays wherever zero is found in the cell. Again traversing through the matrix and replacing current value by 0 if current cell dummy row index or dummy column index is set to 0.

Complexity
Time complexity:
O(N*M + N*M)
Space complexity:
O(N)+O(M)
Code:
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
	vector<int> rows(m,1),cols(n,1);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]==0)
			{
				rows[i]=0;
				cols[j]=0;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(rows[i]==0 || cols[j]==0)
			{
				matrix[i][j]=0;
			}
		}
	}
    
  }
};
_____________________________
Approach 3:
Using dummy arrays increases space complexity to O(N) so trying to reduce space complexity.
We use the 1st row and 1st column of given array as dummy array but matrix[0][0] coincides so to resolve this we use dummy column from 1 to n and dummy row from 0 to m. so for keeping track of whether dummy row contains any 0 we use a variable col and set it to 0 if a 0 is found in dummy row.
We again traverse the array apart from dummy row and dummy column i.e from i-> 1 to m and j-> 1 to n to find if matrix cell contains any zero if it does then we check whether dummy column or row is set if it is set then we set the matrix cell to zero.
Now we again need to perform similar operation for dummy row as well as dummy column. dummy row depends on matrix [0][0] whereas as dummy column depends on cols variable so we set it accordingly.

Complexity
Time complexity:
O(N*M + N*M)
Space complexity:
O(1)
Code:
class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int r=m.size(),c=m[0].size();
        vector<int>row(c,1);
        vector<int>col(r,1);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
              if(m[i][j]==0)
              {
                  row[j]=0;
                  col[i]=0;
              }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
              if(m[i][j]!=0)
              {
                  if(row[j]==0 || col[i]==0 )
                  {
                      m[i][j]=0;
                  }
              }
            }
        }
        
    }
};


