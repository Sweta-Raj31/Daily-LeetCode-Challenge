
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    res += (i == 0 || grid[i-1][j] == 0 ? 1 : 0);
                    res += (i == r-1 || grid[i+1][j] == 0 ? 1 : 0);
                    res += (j == 0 || grid[i][j-1] == 0 ? 1 : 0);
                    res += (j == c-1 || grid[i][j+1] == 0 ? 1 : 0);
                }
            }
        }
        return res;
        
    }
};
