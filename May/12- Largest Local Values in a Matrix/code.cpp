
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>ans;
        int n=grid.size(),m=grid[0].size();
        for(int p=0;p<=n-3;p++)
        {  vector<int>temp;
            for(int q=0;q<=m-3;q++)
            {
                int maxi=0;
                for(int i=p;i<p+3;i++)
                {
                    for(int j=q;j<q+3;j++)
                    {
                       maxi=max(maxi,grid[i][j]);
                    }
                }
                temp.push_back(maxi);
            }
            ans.push_back(temp);
        }
        return ans;

        
    }
};


// Time complexity is O(9*(n-2)^2) -->>> O(n^2)
//space complexity is O((n-2)^2)->>>O(n^2)


// show the logic of this question is check every 3 *3 matrix and search for the max number in that matrix and that will be the first element of ans matrix 
// so what we have done is first be will start the matrix from from 0 to n-3 size because we needed 3*3 matrix at time of declare row we declare a temp vector for
// storing the row vector then double for loop for all the 3*3 matrix and store in maxi the max value then in temp then in ans;
