
class Solution {
public:


int ans=0;

void dfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,int i,int j,int csum)
{
    if(i<0||j<0 ||i>=grid.size()||j>=grid[0].size()) return;

    if(grid[i][j]==0 || visited[i][j]) return;

    visited[i][j]=true;
    csum+=grid[i][j];
    ans=max(ans,csum);
    dfs(grid,visited,i+1,j,csum);
    dfs(grid,visited,i-1,j,csum);
    dfs(grid,visited,i,j+1,csum);
    dfs(grid,visited,i,j-1,csum);
    visited[i][j] = false;
}
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                {
                    dfs(grid,visited,i,j,0);
                }
            }
        }
        return ans;
        
    }
};
