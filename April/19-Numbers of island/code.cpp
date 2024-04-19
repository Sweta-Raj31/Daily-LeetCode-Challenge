
class Solution {
public:
void dfs(int currentRow,int currentCol,vector<vector<char>>& grid)
{
    if(currentRow<0 || currentRow>=grid.size()||currentCol<0 ||currentCol>=grid[0].size() || grid[currentRow][currentCol]=='0')
    return;
    grid[currentRow][currentCol]='0';

    dfs(currentRow+1,currentCol,grid);
     dfs(currentRow-1,currentCol,grid);
      dfs(currentRow,currentCol+1,grid);
       dfs(currentRow,currentCol-1,grid);

    return;
}
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            { if(grid[i][j]=='1'){
                dfs(i,j,grid);
                ans++;}
            }
        }
        return ans;
        
    }
};
