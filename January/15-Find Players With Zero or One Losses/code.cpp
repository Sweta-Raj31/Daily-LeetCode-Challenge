
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches)
    {
        unordered_map<int,int>memo;
        for(auto current : matches)
        {
            int winner = current[0];
            int loser = current[1];
            
            if(memo[loser] == -1)
                memo[loser] = 1;
            else
                memo[loser]++;
            
            if(memo[winner] == 0)
                memo[winner] = -1;     
        }
        vector<vector<int>>ans(2);
        for(auto current : memo)
        {
            if(current.second == -1)
                ans[0].push_back(current.first);
            
            if(current.second == 1)
                ans[1].push_back(current.first);
        }
        
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());

        
        return ans;
    }
};
