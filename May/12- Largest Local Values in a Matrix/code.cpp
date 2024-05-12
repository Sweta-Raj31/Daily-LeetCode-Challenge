
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
